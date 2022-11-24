#include "Fraction.h"

Fraction::Fraction(int _ch, int _zn){
	ch = _ch;
	zn = _zn;
}

void Fraction::Print(){
	cout << ch << "/" << zn;
}

Fraction Fraction::operator+(Fraction _f2){
	Fraction tmp;
	tmp.ch = ch * _f2.zn + _f2.ch * zn;
	tmp.zn = zn * _f2.zn;
	return tmp;
}

bool Fraction::operator>(Fraction _f2){
	return ((double)ch/zn > (double)_f2.ch/_f2.zn);
}

Fraction Fraction::operator++(){
	Fraction tmp;
	tmp.ch = ch + zn;
	tmp.zn = zn;
	return tmp;
}

Fraction& Fraction::operator--(){
	ch -= zn;
	return *this;
}

Fraction& Fraction::operator*(int num){
	ch *= num;
	return *this;
}


Fraction Fraction::operator~(){
	Fraction tmp;
	tmp.ch = zn;
	tmp.zn = ch;
	return tmp;
}
