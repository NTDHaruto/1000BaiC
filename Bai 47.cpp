//Bai 47: Hay tinh tong cac chu so chan cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n,temp1,sum=0;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	temp1=n;
	while(n!=0)
	{
		int temp2=n%10;
		if(temp2%2==0)
		{
			sum+=temp2;
		}
		n/=10;
	}
	cout<<"Tong cac chu so chan cua "<<temp1<<" la S = "<<sum<<endl;
	return 0;
}
