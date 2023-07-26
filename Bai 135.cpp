//Bai 135: Viet ham tim gia tri duong dau tien trong mang 1 chieu cac so thuc
//Neu mang khong co gia tri duong thi tra ve -1

#include<iostream>

using namespace std;

void NhapMang(float A[], int n);
void XuatMang(float A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";
	cin>>n;
	float A[n];
	NhapMang(A,n);
	XuatMang(A,n);
	return 0;
}

void XuatMang(float A[], int n)
{
	int flag=0;
	cout<<"Gia tri duong dau tien trong mang la:"<<endl;
	for(int i=0;i<n;i++)
	{
		if(A[i]>0)
		{
			flag=1;
			cout<<A[i];
			break;
		}
	}
	if(flag==0)
	{
		cout<<-1<<endl;
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
