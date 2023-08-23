//Bai 174: Cho 1 mang so thuc nhieu hon 2 gia tri. Liet ke cac cap phan tu co gia tri a<=b

#include<iostream>

using namespace std;

void TaoMang(float A[],int n);
void KetQua(float A[], int n);

int main()
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	float A[n];
	TaoMang(A,n);
	KetQua(A,n);
	return 0;
}

void KetQua(float A[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i]<=A[j])
			{
				cout<<"("<<A[i]<<","<<A[j]<<")  ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
}

void TaoMang(float A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>A[i];
	}
}
