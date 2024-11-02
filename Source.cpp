#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b)
{
	if(b != 0)
		return a/b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: "
	cin >> b;
	
	if(b != 0)
		cout << "Thuong " << a << "/" << b << "la: " << thuong(a,b);
	else
		cout << "Khong the chi vi b = 0";

	system("pause");
	return 0;
}