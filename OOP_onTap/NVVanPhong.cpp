#include"NVVanPhong.h"
#include<iostream>
using namespace std;
NVVanPhong::NVVanPhong() {}
void NVVanPhong::Nhap()
{
	this->LoaiNhanVien = "NVVanPhong";
	cout << "Nhap So ngay lam viec: ";
	cin >> SoNgayLamViec;
}
void NVVanPhong::TienLuong()
{
	Luong = SoNgayLamViec * 100000;
}