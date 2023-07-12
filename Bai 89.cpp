//Bai 89: tinh tong cac so le nguyen duong nho hon n

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
	}
	cout<<"Tong cac so nguyen duong le nho hon n = "<<sum<<endl;
	return 0;
}
