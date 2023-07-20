//Bai 119: Liet ke tat ca cac so nguyen to nho hon n

#include<iostream>

using namespace std;

int CheckPrime(int n);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(CheckPrime(i)==1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}

int CheckPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}	
	}
	return 1;
}
