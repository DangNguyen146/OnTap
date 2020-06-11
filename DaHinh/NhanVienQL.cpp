#include "NhanVienQL.h"
void NhanVienQL::Nhap()
{
	cout << "Nhap HeSoChucVu: ";
	cin >> HeSoChucVu;
	cout << "Nhap Luong: ";
	cin >> Thuong;
}
float NhanVienQL::TinhLuong()
{
	return LuongCoBan * HeSoChucVu + Thuong;
}
void NhanVienQL::Xuat()
{
	cout << "Loai: Nhan vien van phong" << endl;
	cout << "HeSoChucVu: " << HeSoChucVu << endl;
	cout << "Thuong: " << Thuong << endl;
	cout << "Luong: " << TinhLuong() << endl;

}