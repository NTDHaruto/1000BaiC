//Bai 127: Viet ham sap xep mang 1 chieu tang dan

#include<iostream>
#include<algorithm>

using namespace std;

void NhapMang(int A[], int n);
void XuatMang(int A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";
	cin>>n;
	int A[n];
	NhapMang(A,n);
	sort(A,A+n);
	cout<<"Mang sau khi sap xep:"<<endl;
	XuatMang(A,n);
	return 0;
}

void XuatMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
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
