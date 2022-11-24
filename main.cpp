#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include <string>
#include "time.h"

using namespace std;


int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*Fraction f1(3, 5);
	Fraction f2(4, 7);
	Fraction f3;
	Fraction f4(8, 13);
	f3 = f1 + f2;
	f1.Print();
	cout << " + ";
	f2.Print();
	cout << " = ";
	f3.Print();
	cout << endl;
	cout << (f1 > f2) << endl;
	//f1++;
	f1.Print(); cout << endl;
	f3 * 15;
	f3.Print(); cout << endl;
	f4 = ~f3;
	f4.Print();	cout << endl;*/

	Time t1(12, 23, 34);
	Time t2(5, 23, 1);
	Time t3;
	t3 = t1 + t2;
	t3.print(); cout << endl;

	
	return 0;
}
