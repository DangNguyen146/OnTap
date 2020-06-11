#include "NhanVienSX.h"
NhanVienSX::NhanVienSX() {}
void NhanVienSX::Nhap()
{
	cout << "Nhap So san pham: ";
	cin >> SoSanPham;
}
float NhanVienSX::TinhLuong()
{
	return LuongCoBan + SoSanPham * 2000;
}
void NhanVienSX::Xuat()
{
	cout << "Loai: Nhan vien San xuat" << endl;
	cout << "So san pham: " << SoSanPham << endl;
	cout << "Luong: " << TinhLuong() << endl;
}