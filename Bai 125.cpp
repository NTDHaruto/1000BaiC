//Bai 125: Viet ham dem so luong so nguyen to nho hon 100 trong mang

#include<iostream>
#include<math.h>

using namespace std;

int CheckNguyenTo(int n);
int CountNguyenTo(int A[],int n);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
	cout<<"Co "<<CountNguyenTo(A,n)<<" so nguyen to < 100 trong mang"<<endl;
	return 0;
}

int CountNguyenTo(int A[],int n)
{
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(CheckNguyenTo(A[i])==1 && A[i]<100)
		{
			cnt++;
		}
	}
	return cnt;
}

int CheckNguyenTo(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
