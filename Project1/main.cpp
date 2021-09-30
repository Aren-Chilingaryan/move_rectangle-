#include <iostream>
#include <cstring>
using namespace std;
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
			for (int i = 0; i < height; i++) {
				for (int j = 0; j <= i; j++) {
					if (j == 0 || j == i || j == height - 1 || i == height - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		if (what_to_print == "r") {
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

		if (what_to_print == "s") {
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < height; j++) {
					if (i == 0 || i == height - 1 || j == 0 || j == height - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}

		}
		if (what_to_print == "quiet") {
			break;

		}
		cin >> what_to_print;

	}

}
