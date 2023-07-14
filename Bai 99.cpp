//Bai 99: Viet ctrinh nhap 3 so thuc, sap xep theo thu tu tang dan ma chi dung 1 bien phu

#include<iostream>

using namespace std;

int main()
{
	float a,b,c;
	cout<<"Nhap 3 so thuc a,b,c: ";
	cin>>a>>b>>c;
	if(a>b)
	{
		float temp=a;
		a=b;
		b=temp;
	}
	if(a>c)
	{
		float temp=a;
		a=c;
		c=temp;
	}
	if(b>c)
	{
		float temp=b;
		b=c;
		c=temp;
	}
	cout<<a<<"  "<<b<<"  "<<c<<endl;
	return 0;
}
