//Bai 175: cho 1 mang so thuc co nhieu hon 2 phan tu khac nhau tung doi 1. viet ham tim 2 gia tri gan nhau nhat trong mang

#include<iostream>
#include<math.h>

using namespace std;

void TaoMang(float A[], int n);
float MinKhoangCach(float A[], int n);
void KetQua(float A[], int n, int minKC);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu (n>2): ";
	cin>>n;
	float A[n];
	TaoMang(A,n);
	float minKC=MinKhoangCach(A,n);
	KetQua(A,n,minKC);
	return 0;
}

void KetQua(float A[], int n, int minKC)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(fabs(A[i]-A[j])==minKC)
			{
				cout<<"("<<A[i]<<","<<A[j]<<") o vi tri "<<i<<", "<<j<<endl;
			}
		}
	}
	cout<<endl;
}

float MinKhoangCach(float A[], int n)
{
	float minKC=fabs(A[0]-A[1]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(fabs(A[i]-A[j])<minKC)
			{
				minKC=fabs(A[i]-A[j]);
			}
		}
	}
	return minKC;
}

void TaoMang(float A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
