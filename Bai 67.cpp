//Bài 67: Tính S(x, n) = x - x^2 + x^3 + … + (-1)^n+1 * x^n

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x, n;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=pow(-1,i+1)*pow(x,i);
	}
	cout<<"S(x,n) = "<<sum<<endl;
	return 0;
}
