#include"NhanVien.h"
#pragma once
class NhanVienSX : public  NhanVien
{
public:
	long long LuongCanBan=0;
	long long SoSP=0;
	NhanVienSX();
	void Nhap();
	void TienLuong();
};