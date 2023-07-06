//Bai 64: Giai phuong trinh bac 1

#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"Nhap so nguyen duong a, b: ";
	cin>>a>>b;
	if(a==0)
	{
		if(b==0)
		{
			cout<<"Phuong trinh vo dinh"<<endl;
		}
		else
		{
			cout<<"Phuong trinh vo nghiem"<<endl;
		}
	}
	else
	{
		cout<<a<<"x+"<<b<<"=0 co nghiem x = "<<-b/1.0*a<<endl;
	}
	return 0;
}
