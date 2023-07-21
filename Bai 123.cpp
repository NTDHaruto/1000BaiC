//Bai 123: Viet ham tim vi tri co gia tri nho nhat trong mang

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
	int minValue=A[0];
	int minPos=0;
	for(int i=1;i<n;i++)
	{
		if(minValue>A[i])
		{
			minValue=A[i];
			minPos=i;
		}
	}
	cout<<"Vi tri nho nhat cua mang la vi tri i = "<<minPos<<" voi gia tri = "<<minValue<<endl;
	return 0;
}
