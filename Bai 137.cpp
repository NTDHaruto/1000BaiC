////Bai 137: Tim vi tri ma gia tri tai vi tri do co GTNN trong mang 1 chieu cac so thuc

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
	float temp=A[0];
	int tempPos=0;
	for(int i=1;i<n;i++)
	{
		if(A[i]<temp)
		{
			temp=A[i];
			tempPos=i;
		}
	}
	cout<<"Vi tri nho nhat trong mang: "<<tempPos;
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
