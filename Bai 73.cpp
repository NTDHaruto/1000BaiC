//Bài 73: Tính S(x, n) = -1 + x^2/2! - x^4/4! + … + (-1)^n+1 * x^2n/(2n)!

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
	float rsl=-1;
	for(int i=1;i<=n;i++)
	{
		rsl+=pow(-1,i+1)*((1.0*pow(x,2*i))/GiaiThua(2*i));
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
