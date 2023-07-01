//Bai 44: Nhap so nguyen duong n. Tinh tong cac chu so cua no

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int sum=0,temp1=n;
	while(n!=0)
	{
		int temp2=n%10;
		sum+=temp2;
		n/=10;
	}
	cout<<"Tong cac chu so cua "<<temp1<<" la S = "<<sum<<endl;
	return 0;
}
