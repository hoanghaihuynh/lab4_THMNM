#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b){
	return float(a)/b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a;
	int b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nap b: ";
	cin>>b;
	
	cout <<"Cong ngu";
	
	cout<<"Tich la: "<<tich(a,b)<<endl;
	cout<<"Thuong la: "<<thuong(a,b)<<endl;



	system("pause");
	return 0;
}