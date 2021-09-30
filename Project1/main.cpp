#include <iostream>
#include <cstring>
using namespace std;

void print_triangle(int side) {
	for (int i = 0; i < side; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i || j == side - 1 || i == side - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void print_rectangle(int height, int length) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < length; j++) {
			if (i == 0 || i == height - 1 || j == 0 || j == length - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void print_square(int side) {
	for (int i = 0; i < side; i++) {
		for (int j = 0; j < side; j++) {
			if (i == 0 || i == side - 1 || j == 0 || j == side - 1) {
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
