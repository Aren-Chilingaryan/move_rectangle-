#include <iostream>
#include <cstring>
using namespace std;

void print_triangle(int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i || j == h - 1 || i == h - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void print_rectangle(int h, int l) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			if (i == 0 || i == h - 1 || j == 0 || j == l - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

	void print_square(int h) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < h; j++) {
				if (i == 0 || i == h - 1 || j == 0 || j == h - 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	int main() {
		int height;
		int length;
		string what_to_print;
		cout << "Enter height: ";
		cin >> height;
		cout << "Enter length: ";
		cin >> length;
		cout << "What to print ? ";
		cin >> what_to_print;


		while (true) {
			if (what_to_print == "t") {
				print_triangle(height);
			}

			if (what_to_print == "r") {
				print_rectangle(height, length);
			}

			if (what_to_print == "s") {
				print_square(height);
			}

			if (what_to_print == "quiet") {
				break;
			}
			cout << "What to print ? ";
			cin >> what_to_print;
		}
	}
