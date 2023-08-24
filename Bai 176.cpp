//Bai 176: Hay liet ke cac so am trong mang 1 chieu cac so thuc

#include<iostream>

using namespace std;

void TaoMang(float A[], int n);
void LietKe(float A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";
	cin>>n;
	float A[n];
	TaoMang(A,n);
	LietKe(A,n);
	return 0;
}

void LietKe(float A[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]<0)
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
