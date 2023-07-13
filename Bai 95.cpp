//Bai 95: Viet chuong trinh nhap 3 so thuc, hay thay cac so am = gia tri tuyet doi cua no

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,c;
	cout<<"Nhap 3 so thuc a, b, c: ";
	cin>>a>>b>>c;
	int i=0;
	if(a<0)
	{
		cout<<"Chuyen doi "<<a<<" thanh = "<<fabs(a)<<endl;
	}
	if(b<0)
	{
		cout<<"Chuyen doi "<<b<<" thanh = "<<fabs(b)<<endl;
	}
	if(c<0)
	{
		cout<<"Chuyen doi "<<c<<" thanh = "<<fabs(c)<<endl;
	}
	return 0;
}
