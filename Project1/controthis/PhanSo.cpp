#include "PhanSo.h"
#include <iostream>

using namespace std;
PhanSo::PhanSo()
{
}

PhanSo::PhanSo(int & tuso, int & mauso)
{
	m_Tuso = tuso;
	m_Mauso = mauso;
}



PhanSo::~PhanSo()
{
}

void PhanSo::nhap()
{

	cout << " \n Nhap tu so " << endl;
	cin >> m_Tuso;
	cout << " \n Nhap mau so " << endl;
	cin >> m_Mauso;
}

int PhanSo::Gettuso()
{
	return m_Tuso;
}

int PhanSo::Getmauso()
{
	return m_Mauso;
}


PhanSo operator+(const PhanSo &p1, const PhanSo &p2)
{
	PhanSo p3;
	p3.m_Tuso = p1.m_Tuso*p2.m_Mauso + p1.m_Tuso + p2.m_Tuso;
	p3.m_Mauso = p1.m_Mauso* p2.m_Mauso;
	return p3;
}
int main()
{
	PhanSo p1;
	p1.nhap();
	PhanSo p2;
	p2.nhap();
	PhanSo p3;
	p3 = p1 + p2;
	cout << " " << p3.Gettuso() << " " << p3.Getmauso() << endl;
	system("pause");

}
