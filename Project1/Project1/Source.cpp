#include <iostream>

using namespace std;
int main()
{
	int *array;
	int number;
	cout << " Moi nhap so luong phan tu " << " ";
	cin >> number;
	array = new int[number];
	for (int i = 0; i < number; i++)
	{
		cin >> array[i];
	}
	cout << " mang la " << endl;
	for (int i = 0; i < number; i++)
	{
		cout << array[i] << " " << endl;
	}
	cout << " hello world" << endl;
	system("pause");
	cin.get();
	return 0;
}