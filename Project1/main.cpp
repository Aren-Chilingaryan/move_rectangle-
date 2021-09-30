#include <iostream>
using namespace std;
int main() {
	int height;
	cout << "Enter haight: ";
	cin >> height;

	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i || j == height || i == height) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
