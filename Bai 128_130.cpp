//Bai 128 + 130: Viet ham nhap, xuat mang 1 chieu cac so thuc

#include<iostream>

using namespace std;

void NhapMang(float A[], int n);
void XuatMang(float A[], int n);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	float A[n];
	NhapMang(A,n);
	XuatMang(A,n);
	return 0;
}

void XuatMang(float A[], int n)
{
	cout<<"Mang vua nhap:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<"  ";
	}
	cout<<endl;
}

void NhapMang(float A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
