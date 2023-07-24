//bai 129+ 131: Viet ham nhap xuat mang 1 chieu cac so nguyen

#include<iostream>

using namespace std;

void NhapMang(int A[], int n);
void XuatMang(int A[], int n);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int A[n];
	NhapMang(A,n);
	XuatMang(A,n);
	return 0;
}

void XuatMang(int A[], int n)
{
	cout<<"Mang vua nhap:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<"  ";
	}
	cout<<endl;
}

void NhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
