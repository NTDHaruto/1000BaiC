//Bài 69: Tính S(x, n) = x - x^3 + x^5 + … + (-1)^n * x^2n+1

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x,n,sum=0;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	for(int i=0;i<=n;i++)
	{
		sum+=pow(-1,i)*pow(x,2*i+1);
	}
	cout<<"S(x,n) = "<<sum<<endl;
	return 0;
}
