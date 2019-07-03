// Lab2Prob1.cpp : Defines the entry point for the console application.
// Jason Diaz

#include "stdafx.h"
#include "iostream"

using namespace std;


int main()
{
	int width = 0;
	cout << "Enter a number: " << endl;
	cin >> width;
	
	for (int a = 0; a < width; a++) {
		for (int b = 0; b <= a; b++) {
			for (int c = 0; c < width - a -1 && b < 1; c++) {
				cout << " ";
			}
			cout << "* ";
		}
		cout << endl;
	}

	for (int i = 0; i < width; i++) {
		for (int j = width; j > i + 1; j--) {
			for (int k = 0; k < width - j + i +1 && j == width; k++) {
				cout << " ";
			}
			cout << "* ";
		}
		cout << endl;

	}

	system("pause");
    return 0;
}

