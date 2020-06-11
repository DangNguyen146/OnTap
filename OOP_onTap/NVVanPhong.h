#include"NhanVien.h"
#pragma once
class NVVanPhong:public NhanVien
{
public:
	long long SoNgayLamViec=0;
	NVVanPhong();
	void Nhap();
	void TienLuong();
};

