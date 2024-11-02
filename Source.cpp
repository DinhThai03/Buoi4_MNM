#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b;
}
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b)
int tong(int a, int b)
{
	return a+b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "Hieu la: " << hieu(a,b) << endl;
	cout<<"Tich la"<<tich(a,b) << endl;
	if(b != 0)
		cout << "Thuong " << a << "/" << b << "la: " << thuong(a,b);
	else
		cout << "Khong the chi vi b = 0";
	system("pause");
	return 0;
}