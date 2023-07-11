//Bai 83: Kiem tra 2 so thuc duoc nhap co cung dau hay khong

#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"Nhap so thuc a, b: ";
	cin>>a>>b;
	(a*b<0) ? cout<<a<<" va "<<b<<" la 2 so thuc khong cung dau"<<endl : cout<<a<<" va "<<b<<" la 2 so thuc cung dau"<<endl;
	return 0;
}
