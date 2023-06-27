//Bai 25 Tinh tong tat ca cac uoc so chan cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n,sum=0;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2==0)
			{
				sum+=i;
			}
			int j=n/i;
			if(i!=j)
			{
				if(j%2==0)
				{
					sum+=j;
				}
			}
		}
	}
	cout<<"Ket qua = "<<sum<<endl;
	return 0;
}
