#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int thuong(int a,int b){
	return a/b;
}
int tich(int a, int b){
	return a*b;
}
int hieu(int a, int b){
	return a-b;
}
bool ktsht(int c){
	int s = 0;
	for(int i = 1; i < c; i++){
		if( c % i == 0){
			s += i;
		}
	}
	if(s == c) return true;
	return false;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	
	cout<<"Tich la: "<<tich(a,b)<<endl;
	cout<<"Thuong la: "<<thuong(a,b)<<endl;

	cout<<"tong la: "<<tong(a,b)<<endl;
	cout<<"hieu la: "<<hieu(a,b)<<endl;
	system("pause");
	return 0;
}