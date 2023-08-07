//Bai 170: Cho mang 1 chiu cac so nguyen. Tim so nguyen to nho nhat lon hon moi gia tri trong mang

#include<iostream>

using namespace std;

void TaoMang(int A[], int n);
int MaxMang(int A[], int n);
bool CheckNguyenTo(int n);
int NguyenToMin(int A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong ptu: ";
	cin>>n;
	int A[n];
	TaoMang(A,n);
	int nguyenToMin=NguyenToMin(A,n);
	cout<<"So nguyen to nho nhat nhung lon hon moi gia tri trong mang = "<<nguyenToMin<<endl;
	return 0;
}

int NguyenToMin(int A[], int n)
{
	int maxMang=MaxMang(A,n);
	int temp=maxMang+1;
	do
	{
		if(CheckNguyenTo(temp)==true)
		{
			break;
		}
		temp++;
	}while(true);
	return temp;
}

bool CheckNguyenTo(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
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
