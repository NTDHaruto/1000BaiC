//Bai 65: Giai phuong trinh bac 2

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"Nhap 3 so nguyen duong a,b,c: ";
	cin>>a>>b>>c;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
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
			cout<<a<<"x^2 + "<<b<<"x+"<<c<<" co nghiem x = "<<-c/1.0*b<<endl;
		}
	}
	else
	{
		float delta=pow(b,2)-4*a*c;
		if(delta>0)
		{
			cout<<"Phuong trinh co 2 nghiem phan biet:"<<endl;
			cout<<"x1 = "<<setprecision(2)<<fixed<<(-b+sqrt(delta))/(2*a)<<endl;
			cout<<"x2 = "<<setprecision(2)<<fixed<<(-b-sqrt(delta))/(2*a)<<endl;
		}
		if(delta==0)
		{
			cout<<"Phuong trinh co nghiem kep x1 = x2 = "<<setprecision(2)<<fixed<<-b/(1.0*2*a)<<endl;
		}
		else
		{
			cout<<"Phuong trinh vo nghiem"<<endl;
		}
	}
	return 0;
}
