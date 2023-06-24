//Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	int sumTemp=0,x,n;
	float result=0;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		sumTemp+=i;
		result+=(float)pow(x,i/sumTemp);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<result<<endl;
	return 0;
}
