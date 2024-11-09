#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b){
	return float(a)/b;
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
	int a;
	int b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	

	
	cout<<"Tich la: "<<tich(a,b)<<endl;
	cout<<"Thuong la: "<<thuong(a,b)<<endl;



	system("pause");
	return 0;
}