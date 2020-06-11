#include<string>
#include<iostream>
#include"NhanVien.h"
using namespace std;
#pragma once
class NhanVienSX :public NhanVien
{
protected:
	float SoSanPham;
public:
	NhanVienSX();
	void Nhap();
	float TinhLuong();
	void Xuat();
};

