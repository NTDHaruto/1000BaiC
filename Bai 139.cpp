//Bai 139: Tim vi tri so hoan thien cuoi cung trong mang 1 chieu cac so nguyen
//Khong co thi tra ve -1

#include<iostream>
#include<math.h>

using namespace std;

void NhapMang(int A[], int n);
bool KiemTraSoHoanThien(int n);
void ViTri(int A[], int n);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int A[n];
	NhapMang(A,n);
	ViTri(A,n);
	return 0;
}

void ViTri(int A[], int n)
{
	int pos=-1;
	for(int i=0;i<n;i++)
	{
		if(KiemTraSoHoanThien(A[i])==true)
		{
			pos=i;
		}
	}
	if(pos!=-1)
	{
		cout<<"Vi tri so hoan thien cuoi cung trong mang la: "<<pos<<endl;
	}
	else
	{
		cout<<pos<<endl;
	}
}

bool KiemTraSoHoanThien(int n)
{
	int sum=1;
	for(int i=2;pow(i,2)<=n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
			if(i*i!=n)
			{
				sum+=n/i;
			}
		}
	}
	return sum==n;
}

void NhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
