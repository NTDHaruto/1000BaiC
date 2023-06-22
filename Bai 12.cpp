//Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x,n;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=pow(x,i);
	}
	cout<<"S(n) = "<<sum;
	return 0;
}
