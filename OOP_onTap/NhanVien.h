#include<iostream>
#include<string>
using namespace std;
#pragma once
class NhanVien
{
public:
	string LoaiNhanVien;
	string HoTen;
	string NgaySinh;
	long long Luong=0;
	NhanVien();
	void NhapNV();
	void XuatNV();
};

