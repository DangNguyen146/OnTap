#include<string>
#include<iostream>
#include"NhanVien.h"
using namespace std;
#pragma once
class NhanVienVP :public NhanVien
{
protected:
	float SoNgayLamViec;
	long TroCap;
public:
	void Nhap();
	float TinhLuong();
	void Xuat();
};

