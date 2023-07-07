//Bài 71: Tính S(x, n) = -x + x^2/(1 + 2) - x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int TinhTong(int n);

int main()
{
	int x,n;
	float sum=0;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=pow(-1,i)*(pow(x,i)/(1.0*TinhTong(i)));
	}
	cout<<"S(x,n) = "<<setprecision(2)<<fixed<<sum<<endl;
	return 0;
}

int TinhTong(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
