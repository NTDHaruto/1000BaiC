//Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	int sumTemp=1,x,n;
	float result=0;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		sumTemp*=i;
		result+=(float)pow(x,i/sumTemp);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<result<<endl;
	return 0;
}
