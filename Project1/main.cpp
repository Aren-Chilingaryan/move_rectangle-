#include <iostream>
using namespace std;
int main() {
	int length;
	int height;
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter haight: ";
    cin >> height;

	for (int i = 0; i <  height; i++) {	
		for (int j = 0; j < length; j++) {
			if (i == 0 || i == height-1 || j == 0 || j == length-1) {
				cout << "*";	
			}
			else {
				cout << " ";
			}	
		}
		cout << endl;
	}
}


