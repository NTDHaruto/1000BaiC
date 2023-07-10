//Bài 77: Viet chuong trinh tinh tong cua day so sau: S(n) = 1 + 2 + 3 + … + n

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int sum=1;
	for(int i=2;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"S(n) = "<<sum<<endl;
	return 0;
}
