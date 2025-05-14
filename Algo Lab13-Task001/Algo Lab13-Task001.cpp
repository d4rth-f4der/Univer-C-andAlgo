#include <iostream>
#include <queue>
using namespace std;

void print_int_queue(queue<int> in_que) {
	while (!in_que.empty()) {
		cout << in_que.front() << ' ';
		in_que.pop();
	}
	cout << endl;
}

void remove_odd_from_int_queue(queue<int>& in_que) {
	queue<int> temp_que;

	while (!in_que.empty()) {
		int cur_el = in_que.front();
		if (cur_el % 2 == 0) {
			temp_que.push(cur_el);
		}
		in_que.pop();
	}

	while (!temp_que.empty()) {
		in_que.push(temp_que.front());
		temp_que.pop();
	}

	cout << endl;
}

int main() {
	queue<int>int_queue;
	int_queue.push(1);
	int_queue.push(2);
	int_queue.push(3);
	int_queue.push(4);
	int_queue.push(5);

	cout << "The que 'int_que' is: ";
	print_int_queue(int_queue);

	cout << "\nDeleting odd elements...\n";
	remove_odd_from_int_queue(int_queue);

	cout << "The que 'int_que' is: ";
	print_int_queue(int_queue);

	return 0;
}