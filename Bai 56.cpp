//Bai 56: Hay kiem tra so nguyen duong n co toan chu so le hay khong

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int temp1=n,flag=1;
	while(n!=0)
	{
		int temp2=n%10;
		if(temp2%2==0)
		{
			flag=0;
			break;
		}
		n/=10;
	}
	if(flag==1)
	{
		cout<<"So "<<temp1<<" co cac chu so la so le"<<endl;
	}
	else if(flag==0)
	{
		cout<<"So "<<temp1<<" co cac chu so khong hoan toan la so le"<<endl;
	}
	return 0;
}
