//Bai 50: Hay tim chu so dao nguoc cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int temp1=n;
	cout<<"Chu so dao nguoc cua "<<temp1<<" la = ";
	while(n!=0)
	{
		int temp2=n%10;
		cout<<temp2;
		n/=10;
	}
	cout<<endl;
	return 0;
}
