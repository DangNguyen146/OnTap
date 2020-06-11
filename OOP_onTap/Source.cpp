#include<iostream>
#include<string>
#include"NhanVien.h"
#include"NhanVienSX.h"
#include"NVVanPhong.h"
using namespace std;
int main()
{
	int n;
	cout << "Nhap so NV: ";
	cin >> n;
	NVVanPhong VP[10];
	NhanVienSX SX[10];

	int temp = 0;
	int i = 0, j = 0,k=0;
	while(temp<n)
	{
		cout << "Nhap nguoi thu " << i+1 << ": " << endl;
		cout << "(VP/SX)-->(1/2)= ";
		cin >> k;
		cin.ignore();
		if (k == 1)
		{
			VP[i].NhapNV();
			VP[i].Nhap();
			VP[i].TienLuong();
			i++;
		}
		else
		{
			SX[j].NhapNV();
			SX[j].Nhap();
			SX[j].TienLuong();
			j++;
		}
		temp++;
	}
	system("cls");
	system("color b");
	
	NhanVien min, max;
	if (i != 0)
	{
		min = SX[0];
		max = min;
	}
	else
	{
		min = VP[0];
		max = min;
	}
	for (int k = 0; k < i; k++)
	{
		if (min.Luong > VP[k].Luong)
			min = VP[k];
		if (min.Luong < VP[k].Luong)
			max = VP[k];
		VP[k].XuatNV();
		cout << "___________________________________________________"<<endl;
	}
	cout << "</-->-----------------------------------------<--/>"<<endl;
	for (int k = 0; k < j; k++)
	{
		if (min.Luong > SX[k].Luong)
			min = SX[k];
		if (min.Luong < SX[k].Luong)
			max = SX[k];
		SX[k].XuatNV(); 
		cout << "___________________________________________________" << endl;
	}
	cout << "</-->-----------------------------------------<--/>" << endl;
	cout << "Nhan vien luong cao nhat: " << endl;
	max.XuatNV();
	cout << "</-->-----------------------------------------<--/>" << endl;
	cout << "Nhan vien luong thap nhat: " << endl;
	min.XuatNV();
	return 0;
}