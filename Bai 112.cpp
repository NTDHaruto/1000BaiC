//Bai 112: Viet ctrinh in ra hình chu nhat:
//a) hinh chu nhat dac
//b) hinh chu nhat rong

#include<iostream>

using namespace std;

void hcnDac(int m, int n);
void hcnRong(int m,int n);

int main()
{
	int m,n;
	cout<<"Nhap lan luot chieu dai m va chieu rong n: ";
	cin>>m>>n;
	while(m<n)
	{
		cout<<"Moi nhap lai chieu dai m va chieu rong n cho chuan: ";
		cin>>m>>n;
	}
	hcnDac(m,n);
	hcnRong(m,n);
	return 0;
}

void hcnRong(int m,int n)
{
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j==1||j==m||i==1||i==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

void hcnDac(int m, int n)
{
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
