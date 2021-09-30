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
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}


