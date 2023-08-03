//Bai 165: cho mang 1 chieu cac so nguyen. tim phan tu dau tien co chu so dau tien la chu so le

#include<iostream>

using namespace std;

void TaoMang(int A[], int n);
bool LayFirst(int n);
void Xuat(int A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong ptu: ";
	cin>>n;
	int A[n];
	TaoMang(A,n);
	Xuat(A,n);
	return 0;
}

void Xuat(int A[], int n)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(LayFirst(A[i])==true)
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

bool LayFirst(int n)
{
	int numFirst=0;
	while(n>0)
	{
		numFirst=n%10;
		n/=10;
	}
	if(numFirst%2!=0)
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
