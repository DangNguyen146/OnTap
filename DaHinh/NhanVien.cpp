#include "NhanVien.h"
NhanVien::NhanVien() {}
void NhanVien::Nhap()
{
	cout << "Nhap HoTen: ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh: ";
	getline(cin, NgaySinh);
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
}
float NhanVien::TinhLuong() {
	return LuongCoBan;
}
void NhanVien::Xuat()
{
	cout << "Ho Ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "Luong co ban: " << LuongCoBan << endl;
}
bool NhanVien::TimKiem(string a)
{
	if (this->HoTen == a)
		return true;
	return false;
}