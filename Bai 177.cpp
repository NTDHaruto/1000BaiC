//Bai 177: Viet ham liet ke cac so trong mang 1 chieu cac so thuc thuoc doan [x;y] cho truoc

#include<iostream>

using namespace std;

void TaoMang(float A[], int n);
void LietKe(float A[], int n, float x, float y);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	float A[n];
	TaoMang(A,n);
	float x,y;
	cout<<"Nhap gia tri [x;y]: ";
	cin>>x>>y;
	LietKe(A,n,x,y);
	return 0;
}

void LietKe(float A[], int n, float x, float y)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]<=y && A[i]>=x)
		{
			cout<<A[i]<<"   ";
		}
	}
	cout<<endl;
}

void TaoMang(float A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
