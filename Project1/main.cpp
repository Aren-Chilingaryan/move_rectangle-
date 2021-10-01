#include <iostream>
#include <cstring>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

void Clear()
{
	cout << "\x1B[2J\x1B[H";
}

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

void print_rectangle(int height, int length,int x) {
	for (int i = 0; i < height; i++) {
		cout << setw(x);
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
void clrscr() {};

int main() {

	int height;
	int length;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter length: ";
	cin >> length;
	string area = " ";
	int x = 5;

	print_rectangle(height, length, x);

	while (true) {
		if (GetAsyncKeyState(VK_LEFT)) {
			Clear();
			print_rectangle(height, length, x);
			x = x - 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT)) {
			Clear();
			print_rectangle(height, length, x);
			x = x + 1;
		}
	}
}
