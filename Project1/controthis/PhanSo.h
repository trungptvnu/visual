#pragma once
#include <iostream>
#include <string>

using namespace std;

class PhanSo
{
private:
	int m_Tuso;
	int m_Mauso;
public:
	PhanSo();
	PhanSo(int &tuso, int &mauso);
	virtual ~PhanSo();
	void nhap();
	int Gettuso();
	int Getmauso();
	friend PhanSo operator+ (const PhanSo &p1, const PhanSo &p2);
	/*friend PhanSo operator- (const PhanSo &p1, const PhanSo &p2);
	friend PhanSo operator=(const PhanSo &p1, const PhanSo &p2);
	friend PhanSo operator* (const PhanSo &p1, const PhanSo &p2);
	friend PhanSo operator/(const PhanSo &p1, const PhanSo &p2);*/



};

