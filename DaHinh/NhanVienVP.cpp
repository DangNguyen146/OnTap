#include "NhanVienVP.h"
void NhanVienVP::Nhap()
{
	cout << "Nhap SoNgayLamViec: ";
	cin >> SoNgayLamViec;
	cout << "Nhap Tro cap: ";
	cin >> TroCap;
}
float NhanVienVP::TinhLuong()
{
	return LuongCoBan + SoNgayLamViec * 200000 + TroCap;
}
void NhanVienVP::Xuat()
{
	cout << "Nhap SoNgayLamViec: " << SoNgayLamViec << endl;
	cout << "Nhap Tro cap: " << TroCap << endl;
	cout << "Luong: " << TinhLuong() << endl;
}