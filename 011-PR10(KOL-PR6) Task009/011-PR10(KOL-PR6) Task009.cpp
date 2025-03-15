#include <iostream>
using namespace std;

struct Triangle {
	float a;
	float b;
	float c;
};

float fun_IfTExist(float x, float y, float z) {
	if (x + y <= z || x + z <= y || y + z <= x) {
		cout << "Triangle inexistent\n"; return 1;
	}
	else cout << "Triangle exists\n";
	return 0;
}

float fun_ThalfP(float x, float y, float z) {
	float p = (x + y + z) / 2;
	return p;
}

float fun_STriang(float x, float y, float z) {
	float p = fun_ThalfP(x, y, z);
	float S = sqrt(p * (p - x) * (p - y) * (p - z));
	return S;
}

float fun_RcircleInnerT(float x, float y, float z) {
	float r = (fun_STriang(x, y, z) / fun_ThalfP(x, y, z));
	return r;
}

float fun_RcircleOuterT(float x, float y, float z) {
	float R = (x * y * z) / (4 * fun_STriang(x, y, z));
	return R;
}

void meth_FullTinfo(float x, float y, float z) {
	cout << "sides: " << x << "  " << y << "  " << z << endl;
	int EX = fun_IfTExist(x, y, z);
	if (EX == 0) {
		float p = fun_ThalfP(x, y, z);
		float S = fun_STriang(x, y, z);
		float r = fun_RcircleInnerT(x, y, z);
		float R = fun_RcircleOuterT(x, y, z);
		cout << "Perimeter: " << 2 * p << "\nHalf-perimeter: " << p << "\nArea: " << S << "\nInner circle radius: " << r
			<< "\nOuter circle radius: " << R << endl;
	}
}

void fun_coutTlist(Triangle* tlist, int listsize) {
	cout << "Triangles list (sides):\n";
	for (int i = 0; i < listsize; ++i) {
		Triangle t = tlist[i];
		cout << t.a << " " << t.b << " " << t.c << endl;
	}
}

void fun_TsortBub_byArea(Triangle* tlist, int listsize) {
	cout << "bubblesorting...\n";
	for (int i = 0; i < listsize; ++i) {
		for (int j = 0; j < listsize - 1; ++j) {
			float S1 = fun_STriang(tlist[j].a, tlist[j].b, tlist[j].c);
			float S2 = fun_STriang(tlist[j+1].a, tlist[j+1].b, tlist[j+1].c);
			if (S1 > S2) swap(tlist[j], tlist[j + 1]);
		}
	}
}

int main() {
	float A, B, C;
	cout << "Input sides of the triangle (float, 3 sides):\n";
	cin >> A >> B >> C;
	meth_FullTinfo(A, B, C);

	Triangle trilist[]{
		{ 15.5, 18.5, 20 },
		{ 84, 75.3, 49.8 },
		{ 18, 24, 31.5 },
		{ 21.4, 26.3, 30 },
		{ 46, 46, 52.5 },
		{ 100.5, 120, 98.2 },
		{ 47, 49, 70.5 }
	};

	fun_coutTlist(trilist, size(trilist));
	fun_TsortBub_byArea(trilist, size(trilist));
	cout << "sorted by area: ";
	fun_coutTlist(trilist, size(trilist));
	return 0;
}