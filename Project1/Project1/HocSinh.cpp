#include "HocSinh.h"



HocSinh::HocSinh()
{
}


HocSinh::~HocSinh()
{
}

void HocSinh::nhap()
{
	fflush(stdin);
	cout << "\n nhap ten cua hoc sinh ";
	getline(cin, HoTen);
	fflush(stdin);
	cout << " \n nhap dia chi : ";
	getline(cin, DiaChi);
	cout << " \n nhap diem toan: ";
	cin >> DiemToan;
	cout << " \n nhap diem Van: ";
	cin >> DiemVan;
}

void HocSinh::xuat()
{
	cout << "ten cua hoc sinh la: " << HoTen << endl;
	cout << " dia chi : " << DiaChi << endl;
	cout << "n nhap diem toan: " << DiemToan << endl;
	cout << "n nhap diem van : " << DiemVan << endl;
}


