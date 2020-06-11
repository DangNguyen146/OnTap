#include<iostream>
#include"NhanVien.h"
#include"NhanVienQL.h"
#include"NhanVienSX.h"
#include"NhanVienVP.h"
using namespace std;
int main()
{
	int n;
	cin >> n;
	NhanVien* nv[100];
	for (int i = 0; i < n; i++)
	{
		cout << "1/QL 2/VP 3/SX" << endl;
		int loai;
		cin >> loai;
		cin.ignore();
		switch (loai)
		{
		case 1:
			nv[i] = new NhanVienSX();
			break;
		case 2:
			nv[i] = new NhanVienVP();
			break;
		case 3:
			nv[i] = new NhanVienQL();
			break;
		}
		nv[i]->NhanVien::Nhap();
		nv[i]->Nhap();
	}
	for (int i = 0; i < n; i++)
		nv[i]->TinhLuong();
	for (int i = 0; i < n; i++)
	{
		nv[i]->NhanVien::Xuat();
		nv[i]->Xuat();
	}
	string temp;
	for (int i = 0; i < n; i++)
		if (temp = nv[i]->NhanVien::TimKiem == true)
			cout << "Tim thay" << endl;
	return 0;
}