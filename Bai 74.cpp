//Bài 74: Tính S(x, n) = 1 - x + x^3/3! - x^5/5! + … + (-1)^n+1 * x^2n+1/(2n + 1)!

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
	float rsl=1;
	for(int i=0;i<=n;i++)
	{
		rsl+=pow(-1,i+1)*((1.0*pow(x,2*i+1))/GiaiThua(2*i+1));
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
