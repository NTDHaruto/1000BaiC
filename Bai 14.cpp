//B�i 14: T�nh S(n) = x + x^3 + x^5 + � + x^2n + 1

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x,n;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	int sum=x;
	for(int i=1;i<=n;i++)
	{
		sum+=pow(x,2*i+1);
	}
	cout<<"S(n) = "<<sum<<endl;
	return 0;
}
