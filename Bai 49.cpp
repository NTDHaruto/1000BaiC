//Bai 49: Cho so nguyen duong n. Hay tim chu so dau tien cua n

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int temp1=n,temp2;
	while(n!=0)
	{
		temp2=n%10;
		n/=10;
	}
	cout<<"Chu so dau tien cua "<<temp1<<" la = "<<temp2<<endl;
	return 0;
}
