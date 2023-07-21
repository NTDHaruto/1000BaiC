//Bai 124: Viet ham kiem tra trong mang so nguyen cos ton tai gia tri chan nho hon 2004 hay khong

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]<2004 &&A[i]%2==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Co ton tai phan tu < 2004 va la so chan"<<endl;
	}
	else
	{
		cout<<"Khong ton tai phan tu < 2004 va la so chan"<<endl;
	}
	return 0;
}
