//Bai 140+141: Tim gia tri va vi tri cua gia tri duong nho nhat trong mang 1 chieu cac so thuc
//Khong co thi tra ve -1

#include<iostream>

using namespace std;

void NhapMang(float A[], int n);
void GiaTriVaViTriMin(float A[], int n);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	float A[n];
	NhapMang(A,n);
	GiaTriVaViTriMin(A,n);
	return 0;
}

void GiaTriVaViTriMin(float A[], int n)
{
	float min=-1;
	int minPos=-1;
	for(int i=0;i<n;i++)
	{
		if(A[i]>0)
		{
			if(min==-1 || min>A[i])
			{
				min=A[i];
				minPos=i;
			}
		}
	}
	if(minPos==-1)
	{
		cout<<minPos<<endl;
	}
	else
	{
		cout<<"Gia tri duong nho nhat trong mang la "<<min<<" o vi tri "<<minPos<<endl;
	}
}

void NhapMang(float A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
