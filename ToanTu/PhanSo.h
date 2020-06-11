#include<iostream>
#pragma once
using namespace std;
class PhanSo
{
protected:
	int TuSo;
	int MauSo;
public:
	PhanSo(int Tu, int Mau) :TuSo(Tu), MauSo(Mau) {}
	PhanSo(int Tu) :TuSo(Tu), MauSo(1) {}
	operator float()
	{
		return TuSo / MauSo;
	}
	friend istream& operator>>(istream& input, PhanSo& a);
	friend ostream& operator<<(ostream& output, const PhanSo& a);
	PhanSo operator+ (PhanSo b);
	PhanSo operator-(PhanSo b) ;
	PhanSo operator*(PhanSo b) ;
	PhanSo operator=(PhanSo b);
	PhanSo operator++();
};

