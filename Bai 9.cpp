//Bài 9: Tính T(n) = 1 x 2 x 3…x N

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
		sum*=i;
	}
	cout<<"S(n) = "<<sum;
	return 0;
}
