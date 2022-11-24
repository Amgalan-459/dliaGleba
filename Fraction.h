#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;

class Fraction{
	int ch;
	int zn;
public:
	Fraction(int _ch=0, int _zn=1);
	void Print();
	Fraction operator + (Fraction _f2);
	Fraction operator - (Fraction _f2);
	Fraction operator / (Fraction _f2);
	Fraction operator * (Fraction _f2);
	bool operator > (Fraction _f2);
	bool operator < (Fraction _f2);
	bool operator == (Fraction _f2);
	bool operator != (Fraction _f2);
	Fraction operator ++();
	Fraction& operator--();
	Fraction& operator *(int num);
	Fraction operator ~();
};
