//Bai 162: Cho amng 1 chieu cac so thuc, tim phan tu thoa man dieu kien:
//co 2 gia tri lan can
//gia tri cua no = tich 2 gia tri lan can
//neu khong co tra ve -1

#include<iostream>

using namespace std;

void TaoMang(double A[], int n);
void TimKiem(double A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong ptu: ";
	cin>>n;
	double A[n];
	TaoMang(A,n);
	TimKiem(A,n);
	return 0;
}

void TimKiem(double A[], int n)
{
	int flag=0;
	for(int i=1;i<n-1;i++)
	{
		if(A[i]==A[i-1]*A[i+1])
		{
			flag=1;
			cout<<A[i]<<"  ";
		}
	}
	if(flag==0)
	{
		cout<<-1;
	}
	cout<<endl;
}

void TaoMang(double A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap ptu thu "<<i+1<<": ";
		cin>>A[i];
	}
}

