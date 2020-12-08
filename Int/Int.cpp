#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {

	setlocale(LC_ALL, "rus");
	int mass[20], i(0),sum(0);
	
	for (; i < sizeof(mass); i++) {
		cout << "Введите " << i+1 << " оценку :";
		cin >> mass[i];
		sum += mass[i];
	}

	cout << "Средний бал : " << sum / 20;
	
	/*char in_string[500];
	gets_s(in_string);*/


}