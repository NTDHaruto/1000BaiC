//Bai 136: Tim gia tri chan cuoi cung trong mang 1 chieu cac so nguyen
//Neu mang khong co gia tri chan thi tra ve -1

#include<iostream>

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
	XuatMang(A,n);
	return 0;
}

void XuatMang(int A[], int n)
{
	int flag=0,temp=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0)
		{
			flag=1;
			temp=A[i];
		}
	}
	if(flag==1)
	{
		cout<<"Gia tri chan cuoi cung trong mang = "<<temp;
	}
	else
	{
		cout<<-1;
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
