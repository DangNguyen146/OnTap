#include<string>
#include<iostream>
#include"NhanVien.h"
using namespace std;
#pragma once
class NhanVienQL :public NhanVien
{
protected:
	float HeSoChucVu;
	long Thuong;
public:
	void Nhap();
	float TinhLuong();
	void Xuat();
};

