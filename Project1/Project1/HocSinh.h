#pragma once
#include <iostream>
#include <string>

using namespace std;

class HocSinh
{
private:
	string HoTen, DiaChi;
	float DiemToan, DiemVan;
public:
	HocSinh();
	virtual ~HocSinh();
	void xuat();
	void nhap();
};



