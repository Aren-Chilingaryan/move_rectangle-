#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
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

void print_rectangle(int height, int length, int quantity_of_spaces, int quantity_of_new_lines) {
	for (int i = 0; i < quantity_of_new_lines; i++) {
		cout << endl;
	}
	for (int i = 0; i < height; i++) {
		cout << setw(quantity_of_spaces);
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

void decide_color(string color) {
	if (color == "red") {
		system("Color C");
	}
	else if (color == "green") {
		system("Color A");
	}
	else if (color == "blue") {
		system("Color 1");
	}
	else if (color == "aqua") {
		system("Color 3");
	}
	else if (color == "purple") {
		system("Color 5");
	}
	else if (color == "yellow") {
		system("Color 6");
	}
	else if (color == "gray") {
		system("Color 8");
	}
	else if (color == "white") {
		system("Color 7");
	}
}

int main() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int columns, rows;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

	int height;
	int length;
	string color;
	cout << " Enter color: ";
	cin >> color;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter length: ";
	cin >> length;
	int quantity_of_spaces = 0;
	int quantity_of_new_lines = 1;

	decide_color(color);
	print_rectangle(height, length, quantity_of_spaces, quantity_of_new_lines);
	while (true) {
		if (GetAsyncKeyState(VK_LEFT)) {
			quantity_of_spaces -= 1;
			system("CLS");
			print_rectangle(height, length, quantity_of_spaces, quantity_of_new_lines);
			if (quantity_of_spaces < 0)
				quantity_of_spaces = 0;
		}
		else if (GetAsyncKeyState(VK_RIGHT)) {
			quantity_of_spaces += 1;
			system("CLS");
			print_rectangle(height, length, quantity_of_spaces, quantity_of_new_lines);
			if (quantity_of_spaces > (columns - length))
				quantity_of_spaces = (columns - length);
		}
		else if (GetAsyncKeyState(VK_UP)) {
			quantity_of_new_lines -= 1;
			system("CLS");
			print_rectangle(height, length, quantity_of_spaces, quantity_of_new_lines);
			if (quantity_of_new_lines < 0)
				quantity_of_new_lines = 0;
		}
		else if (GetAsyncKeyState(VK_DOWN)) {
			quantity_of_new_lines += 1;
			system("CLS");
			print_rectangle(height, length, quantity_of_spaces, quantity_of_new_lines);
			if (quantity_of_new_lines > rows - height)
				quantity_of_new_lines = rows - height;
		}
	}
}