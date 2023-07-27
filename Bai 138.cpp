//Bai 138: Tim vi tri cua gia tri chan dau tien trong mang 1 chieu cac so nguyen
//Neu khong co tra ve -1

#include<iostream>

using namespace std;

void NhapMang(int A[], int n);
void ViTri(int A[], int n, int &pos);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";
	cin>>n;
	int A[n],pos=-1;
	NhapMang(A,n);
	ViTri(A,n,pos);
	if(pos!=-1)
	{
		cout<<"Vi tri so chan da tien trong mang la "<<pos<<endl;
	}
	else
	{
		cout<<pos<<endl;
	}
	return 0;
}

void ViTri(int A[], int n, int &pos)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0)
		{
			pos=i;
			break;
		}
	}
}

void NhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
