//Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int KetQuaSoMu(int i);

int main()
{
	int x,n;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	float sum=1;
	for(int i=0;i<=n;i++)
	{
		int sumTemp=KetQuaSoMu(i);
		sum+=(pow(x,(2*i+1))/sumTemp);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<sum<<endl;
	return 0;
}

int KetQuaSoMu(int i)
{
	int sumTemp=1;
	for(int j=0;j<=i;j++)
	{
		sumTemp*=((2*j)+1);
	}
	return sumTemp;
}
