//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n

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
		sum+=pow(x,2*i);
	}
	cout<<"S(n) = "<<sum<<endl;
	return 0;
}
