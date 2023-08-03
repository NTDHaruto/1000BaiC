//Bai 163: Tim so chinh phuong dau tien trong mang 1 chieu cac so nguyen

#include<iostream>
#include<math.h>

using namespace std;

void TaoMang(int A[], int n);
bool CheckChinhPhuong(int n);
void TimKiem(int A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong ptu: ";
	cin>>n;
	int A[n];
	TaoMang(A,n);
	TimKiem(A,n);
	return 0;
}

void TimKiem(int A[], int n)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(CheckChinhPhuong(A[i])==true)
		{
			flag=1;
			cout<<A[i]<<endl;
			break;
		}
	}
	if(flag==0)
	{
		cout<<-1<<endl;
	}
	
}

bool CheckChinhPhuong(int n)
{
	int temp=sqrt(n);
	if(pow(temp,2)==n)
	{
		return true;
	}
	return false;
}

void TaoMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap ptu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
