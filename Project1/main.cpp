#include <iostream>
using namespace std;
int main() {
	int height;
	cout << "Enter haight: ";
	cin >> height;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < i; j++) {
			if (j == 0 || j == i - 1 || j == height - 1 || i == height - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
