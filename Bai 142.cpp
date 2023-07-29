//Bai 142: Tim gia tri nho nhat trong mang 1 chieu cac so thuc

#include<iostream>

using namespace std;

void NhapMang(float A[], int n);
void MinMang(float A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	float A[n];
	NhapMang(A,n);
	MinMang(A,n);
	return 0;
}

void MinMang(float A[], int n)
{
	float min=A[0];
	for(int i=1;i<n;i++)
	{
		if(min>A[i])
		{
			min=A[i];
		}
	}
	cout<<"Gia tri min trong mang la: "<<min<<endl;
}

void NhapMang(float A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap pha tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
