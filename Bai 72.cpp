//Bài 72: Tính S(x, n) = - x + x^2/2! - x^3/3! + … + (-1)^n * x^n/n!

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int GiaiThua(int n);

int main()
{
	int x,n;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	float rsl=0;
	for(int i=1;i<=n;i++)
	{
		rsl+=pow(-1,i)*((1.0*pow(x,i))/GiaiThua(i));
	}
	cout<<"S(x, n) = "<<setprecision(2)<<fixed<<rsl<<endl;
	return 0;
}

int GiaiThua(int n)
{
	int rsl=1;
	for(int i=1;i<=n;i++)
	{
		rsl*=i;
	}
	return rsl;
}
