//Bai 126: Viet ham tinh tong cac gia tri am trong mang 1 chieu cac so thuc

#include<iostream>

using namespace std;

void NhapMang(float A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";
	cin>>n;
	float A[n];
	NhapMang(A,n);
	float sum=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]<0)
		{
			sum+=A[i];
		}
	}
	cout<<"S(n) = "<<sum<<endl;
	return 0;
}

void NhapMang(float A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
