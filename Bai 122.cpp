//Bai 122: Viet ham tim GTLN trong mang 1 chieu cac so thuc

#include<iostream>

using namespace std;

void NhapMang(int A[], int n);
int MaxMang(int A[],int nA);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";
	cin>>n;
	int A[n];
	NhapMang(A,n);
	int maxValue=MaxMang(A,n);
	cout<<"Gia tri lon nhat trong mang = "<<maxValue<<endl;
	return 0;
}

int MaxMang(int A[], int nA)
{
	int maxTemp=A[0];
	for(int i=1;i<nA;i++)
	{
		if(maxTemp<A[i])
		{
			maxTemp=A[i];
		}
	}
	return maxTemp;
}

void NhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
