//Bai 24: Liet ke tat ca cac uoc so le cua so nguyen duong n

#include<iostream>

using namespace std;

void XuatSo(int i);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			XuatSo(i);
			int j=n/i;
			if(i!=j)
			{
				XuatSo(j);
			}
		}
	}
	return 0;
}

void XuatSo(int i)
{
	if(i%2!=0)
	{
		cout<<i<<"  ";
	}
}
