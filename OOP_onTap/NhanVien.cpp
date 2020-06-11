#include "NhanVien.h"
#include<iostream>
#include<string>
using namespace std;
NhanVien::NhanVien() {}
void NhanVien::NhapNV()
{
	cout << "Nhap Ho ten: ";
	getline(cin, this->HoTen);
	//cin.ignore();
	cout << "Nhap Ngay Sinh: ";
	getline(cin, this->NgaySinh);
}

void NhanVien::XuatNV()
{
	cout << "Loai: " << this->LoaiNhanVien<<endl;
	cout << "Ho ten: " << this->HoTen << endl;
	cout << "Ngay sinh: " << this->NgaySinh << endl;
	cout << "Tien luong: " << this->Luong << endl;
}