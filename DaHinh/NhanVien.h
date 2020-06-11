#include<string>
#include<iostream>

using namespace std;
#pragma once
class NhanVien
{
protected:
	string HoTen;
	string NgaySinh;
	float LuongCoBan;
public:
	NhanVien();
	virtual void Nhap();
	virtual float TinhLuong() = 0;
	virtual void Xuat();
	bool TimKiem(string a);
};

