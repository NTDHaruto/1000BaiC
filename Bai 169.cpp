//Bai 169: Cho mang 1 chieu cac so nguyen. Tim so chan nho nhat lon hon moi gia tri trong mang

#include<iostream>

using namespace std;

void TaoMang(int A[], int n);
int MaxMang(int A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong ptu: ";
	cin>>n;
	int A[n];
	TaoMang(A,n);
	int maxMang=MaxMang(A,n);
	if(maxMang%2!=0)
	{
		maxMang++;
	}
	else
	{
		maxMang+=2;
	}
	cout<<"So chan nho nhat ma lon hon tat ca gia tri trong mang = "<<maxMang<<endl;
	return 0;
}

int MaxMang(int A[], int n)
{
	int maxMang=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]>maxMang)
		{
			maxMang=A[i];
		}
	}
	return maxMang;
}

void TaoMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
