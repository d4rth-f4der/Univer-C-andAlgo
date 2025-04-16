#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

long double round_to_decimal(long double value, int precision) {
	long double power = pow(10.0, precision);
	return round(value * power) / power;
}

long double count3row3colMatrixDeterminant(const vector<vector<long double>>& matrix) {
	if (matrix.size() != 3 || matrix[0].size() != 3) {
		cout << "Matrix is not 3x3" << endl;
		return 0;
	}
	long double determinant = 0;
	long double a11 = matrix[0][0];
	long double a12 = matrix[0][1];
	long double a13 = matrix[0][2];
	long double a21 = matrix[1][0];
	long double a22 = matrix[1][1];
	long double a23 = matrix[1][2];
	long double a31 = matrix[2][0];
	long double a32 = matrix[2][1];
	long double a33 = matrix[2][2];

	cout << fixed << setprecision(10);

	cout << a11 << " * (" << a22 << " * " << a33 << " - " << a23 << " * " << a32 << ") - \n"
		<< a12 << " * (" << a21 << " * " << a33 << " - " << a23 << " * " << a31 << ") + \n"
		<< a13 << " * (" << a21 << " * " << a32 << " - " << a22 << " * " << a31 << ") =\n\n= "
		<< a11 << " * (" << a22 * a33 << " - " << a23 * a32 << ") - \n"
		<< a12 << " * (" << a21 * a33 << " - " << a23 * a31 << ") + \n"
		<< a13 << " * (" << a21 * a32 << " - " << a22 * a31 << ") =\n\n= "
		<< a11 << " * " << a22 * a33 - a23 * a32 << " - "
		<< a12 << " * " << a21 * a33 - a23 * a31 << " + "
		<< a13 << " * " << a21 * a32 - a22 * a31 << " =\n= "
		<< round_to_decimal(a11 * (a22 * a33 - a23 * a32), 6)
		<< " - " << round_to_decimal(a12 * (a21 * a33 - a23 * a31), 6) << " + "
		<< round_to_decimal(a13 * (a21 * a32 - a22 * a31), 6) << " =\n= "
		<< round_to_decimal(a11 * (a22 * a33 - a23 * a32), 6) - round_to_decimal(a12 * (a21 * a33 - a23 * a31), 6) + round_to_decimal(a13 * (a21 * a32 - a22 * a31), 6) << endl;
	return round_to_decimal(a11 * (a22 * a33 - a23 * a32), 6) - round_to_decimal(a12 * (a21 * a33 - a23 * a31), 6) + round_to_decimal(a13 * (a21 * a32 - a22 * a31), 6);
}

long double calculate_quadratic(long double a, long double b, long double c, long double x) {
	long double result = a * x * x + b * x + c;
	cout << "f(" << x << ") = " << a << " * " << x << "^2 + " << b << " * " << x << " + " << c << " = " << result << endl;
	return result;
}

long double calculate_hiperbolic(long double a, long double b, long double x) {
	long double result = a / x + b;
	cout << "f(" << x << ") = " << a << " / " << x << " + " << b << " = " << result << endl;
	return result;
}

int main() {
	vector<vector<long double>> matrix = {
		{ 19949.1255, 2411.521, 317.55 },
		{ 2411.521,	  317.55,   48.7   },
		{ 317.55,	  48.7,	    10     },
	};

	vector<vector<long double>> matrix_a = {
		{ 2877.356, 2411.521, 317.55 },
		{ 384.5,	317.55,   48.7   },
		{ 63.4,	    48.7,	  10     },
	};

	vector<vector<long double>> matrix_b = {
		{ 19949.1255, 2877.356, 317.55 },
		{ 2411.521,	  384.5,    48.7   },
		{ 317.55,	  63.4,	    10     },
	};

	vector<vector<long double>> matrix_c = {
		{ 19949.1255, 2411.521, 2877.356 },
		{ 2411.521,	  317.55,   384.5    },
		{ 317.55,	  48.7,	    63.4     },
	};

	cout << "Initial matrix:" << endl;
	long double matrix_det = count3row3colMatrixDeterminant(matrix);
	cout << "Determinant: " << matrix_det << endl;

	cout << "\nMatrix for Da:" << endl;
	long double matrix_a_det = count3row3colMatrixDeterminant(matrix_a);
	cout << "Matrix for Da determinant: " << matrix_a_det << endl;

	cout << "\nMatrix for Db:" << endl;
	long double matrix_b_det = count3row3colMatrixDeterminant(matrix_b);
	cout << "Matrix for Db determinant: " << matrix_b_det << endl;

	cout << "\nMatrix for Dc:" << endl;
	long double matrix_c_det = count3row3colMatrixDeterminant(matrix_c);
	cout << "Matrix for Dc determinant: " << matrix_c_det << endl;

	cout << "coefficients are: " << matrix_a_det / matrix_det << ", " << matrix_b_det / matrix_det << ", " << matrix_c_det / matrix_det << endl;

	long double x1 = 1.1, x2 = 1.7, x3 = 2.1, x4 = 2.9, x5 = 4.8, x6 = 5.2, x7 = 5.8, x8 = 6.3, x9 = 8.9, x10 = 9.9;
	long double y1 = 2.1, y2 = 4.9, y3 = 4.3, y4 = 5.6, y5 = 4.2, y6 = 5.6, y7 = 6, y8 = 8.2, y9 = 9.9, y10 = 12.6;

	long double a = 0.088;
	long double b = -0.006;
	long double c = 3.571;
	/*long double a = 3.571;
	long double b = -0.006;
	long double c = 0.088;*/
	long double ysq1 = calculate_quadratic(a, b, c, x1);
	long double ysq2 = calculate_quadratic(a, b, c, x2);
	long double ysq3 = calculate_quadratic(a, b, c, x3);
	long double ysq4 = calculate_quadratic(a, b, c, x4);
	long double ysq5 = calculate_quadratic(a, b, c, x5);
	long double ysq6 = calculate_quadratic(a, b, c, x6);
	long double ysq7 = calculate_quadratic(a, b, c, x7);
	long double ysq8 = calculate_quadratic(a, b, c, x8);
	long double ysq9 = calculate_quadratic(a, b, c, x9);
	long double ysq10 = calculate_quadratic(a, b, c, x10);
	cout << "Y sum: " << ysq1 + ysq2 + ysq3 + ysq4 + ysq5 + ysq6 + ysq7 + ysq8 + ysq9 + ysq10 << endl;
	long double sqdiff1 = (y1 - ysq1) * (y1 - ysq1);
	long double sqdiff2 = (y2 - ysq2) * (y2 - ysq2);
	long double sqdiff3 = (y3 - ysq3) * (y3 - ysq3);
	long double sqdiff4 = (y4 - ysq4) * (y4 - ysq4);
	long double sqdiff5 = (y5 - ysq5) * (y5 - ysq5);
	long double sqdiff6 = (y6 - ysq6) * (y6 - ysq6);
	long double sqdiff7 = (y7 - ysq7) * (y7 - ysq7);
	long double sqdiff8 = (y8 - ysq8) * (y8 - ysq8);
	long double sqdiff9 = (y9 - ysq9) * (y9 - ysq9);
	long double sqdiff10 = (y10 - ysq10) * (y10 - ysq10);
	cout << "(Y1 - Y1sq)^2 = " << sqdiff1 << endl;
	cout << "(Y2 - Y2sq)^2 = " << sqdiff2 << endl;
	cout << "(Y3 - Y3sq)^2 = " << sqdiff3 << endl;
	cout << "(Y4 - Y4sq)^2 = " << sqdiff4 << endl;
	cout << "(Y5 - Y5sq)^2 = " << sqdiff5 << endl;
	cout << "(Y6 - Y6sq)^2 = " << sqdiff6 << endl;
	cout << "(Y7 - Y7sq)^2 = " << sqdiff7 << endl;
	cout << "(Y8 - Y8sq)^2 = " << sqdiff8 << endl;
	cout << "(Y9 - Y9sq)^2 = " << sqdiff9 << endl;
	cout << "(Y10 - Y10sq)^2 = " << sqdiff10 << endl;
	cout << "Sum of squared differences: " << sqdiff1 + sqdiff2 + sqdiff3 + sqdiff4 + sqdiff5 + sqdiff6 + sqdiff7 + sqdiff8 + sqdiff9 + sqdiff10 << endl;
	
	a = -8.589, b = 9.143;
	cout << endl;
	long double yhip1 = calculate_hiperbolic(a, b, x1);
	long double yhip2 = calculate_hiperbolic(a, b, x2);
	long double yhip3 = calculate_hiperbolic(a, b, x3);
	long double yhip4 = calculate_hiperbolic(a, b, x4);
	long double yhip5 = calculate_hiperbolic(a, b, x5);
	long double yhip6 = calculate_hiperbolic(a, b, x6);
	long double yhip7 = calculate_hiperbolic(a, b, x7);
	long double yhip8 = calculate_hiperbolic(a, b, x8);
	long double yhip9 = calculate_hiperbolic(a, b, x9);
	long double yhip10 = calculate_hiperbolic(a, b, x10);
	cout << "Y sum: " << yhip1 + yhip2 + yhip3 + yhip4 + yhip5 + yhip6 + yhip7 + yhip8 + yhip9 + yhip10 << endl;
	long double hipdiff1 = (y1 - yhip1) * (y1 - yhip1);
	long double hipdiff2 = (y2 - yhip2) * (y2 - yhip2);
	long double hipdiff3 = (y3 - yhip3) * (y3 - yhip3);
	long double hipdiff4 = (y4 - yhip4) * (y4 - yhip4);
	long double hipdiff5 = (y5 - yhip5) * (y5 - yhip5);
	long double hipdiff6 = (y6 - yhip6) * (y6 - yhip6);
	long double hipdiff7 = (y7 - yhip7) * (y7 - yhip7);
	long double hipdiff8 = (y8 - yhip8) * (y8 - yhip8);
	long double hipdiff9 = (y9 - yhip9) * (y9 - yhip9);
	long double hipdiff10 = (y10 - yhip10) * (y10 - yhip10);
	cout << "(Y1 - Y1hip)^2 = " << hipdiff1 << endl;
	cout << "(Y2 - Y2hip)^2 = " << hipdiff2 << endl;
	cout << "(Y3 - Y3hip)^2 = " << hipdiff3 << endl;
	cout << "(Y4 - Y4hip)^2 = " << hipdiff4 << endl;
	cout << "(Y5 - Y5hip)^2 = " << hipdiff5 << endl;
	cout << "(Y6 - Y6hip)^2 = " << hipdiff6 << endl;
	cout << "(Y7 - Y7hip)^2 = " << hipdiff7 << endl;
	cout << "(Y8 - Y8hip)^2 = " << hipdiff8 << endl;
	cout << "(Y9 - Y9hip)^2 = " << hipdiff9 << endl;
	cout << "(Y10 - Y10hip)^2 = " << hipdiff10 << endl;
	cout << "Sum of hiperbolic differences: " << hipdiff1 + hipdiff2 + hipdiff3 + hipdiff4 + hipdiff5 + hipdiff6 + hipdiff7 + hipdiff8 + hipdiff9 + hipdiff10 << endl;

	return 0;
}