//B�i 1: T�nh S(n) = 1 + 2 + 3 + � + n

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	cout<<"Nhap so nguyen duong n: ";
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"S(n)= "<<sum<<endl;
	system("pause");
	return 0;
}
