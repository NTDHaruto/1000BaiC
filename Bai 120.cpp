//Bai 120: Liet ke tat ca cac so chinh phuong nho hon n

#include<iostream>
#include<cmath>

using namespace std;

int KiemTraChinhPhuong(int n);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(KiemTraChinhPhuong(i)==1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;	
}

int KiemTraChinhPhuong(int n)
{
	int temp=sqrt(n);
	if(pow(temp,2)==n)
	{
		return 1;
	}
	return 0;
}
