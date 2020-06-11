#include "NhanVienSX.h"
#include<iostream>
using namespace std;
NhanVienSX::NhanVienSX() {}
void NhanVienSX::Nhap()
{
	this->LoaiNhanVien = "NVSanXuat";
	cout << "Nhap Luong co ban: ";
	cin >> this->LuongCanBan;
	cout << "Nhap So san pham: ";
	cin >> this->SoSP;
}
void NhanVienSX::TienLuong()
{
	Luong = LuongCanBan + SoSP * 5000;
}