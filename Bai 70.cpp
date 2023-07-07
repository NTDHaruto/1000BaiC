//Bài 70: Tính S(n) = 1 - 1/(1 + 2) + 1/(1 + 2 + 3) + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int TinhTong(int n);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		int sumTemp=TinhTong(i);
		sum+=pow(-1,i+1)*(1/(1.0*sumTemp));
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<sum<<endl;
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
