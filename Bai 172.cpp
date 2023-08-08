//Bai 172: Viet ham tim BCNN cua tat ca cac phan tu trong mang 1 chieu cac so nguyen

#include<iostream>

using namespace std;

void TaoMang(int A[], int n);
int UCLN(int a, int b);
int BCNN(int a, int b);
void BCNNTrongMang(int A[], int n);

int main()
{
	int n;
	cout<<"Nhap so long ptu: ";
	cin>>n;
	int A[n];
	TaoMang(A,n);
	BCNNTrongMang(A,n);
	return 0;
}

void BCNNTrongMang(int A[], int n)
{
	int rst=A[0];
	for(int i=1;i<n;i++)
	{
		rst=BCNN(rst,A[i]);
	}
	cout<<"BCNN cua mang la = "<<rst<<endl;
}

int BCNN(int a, int b)
{
	return (a*b)/UCLN(a,b);
}

int UCLN(int a, int b)
{
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

void TaoMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
