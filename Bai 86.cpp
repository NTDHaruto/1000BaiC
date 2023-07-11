//Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n,sum=1;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		sum+=pow(i,3);
	}
	cout<<"S(n) = "<<sum<<endl;
	return 0;
}
