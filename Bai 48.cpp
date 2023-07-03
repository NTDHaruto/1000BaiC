//Bai 48: Hay tinh tich cac chu so le cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n,temp1,rs=1;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	temp1=n;
	while(n!=0)
	{
		int temp2=n%10;
		if(temp2%2!=0)
		{
			rs*=temp2;
		}
		n/=10;
	}
	cout<<"Tich cac chu so le cua "<<temp1<<" la = "<<rs<<endl;
	return 0;
}
