//Bai 57: Hay kiem tra so nguyen duong n co toan chu so chan hay khong

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
		if(temp2%2!=0)
		{
			flag=0;
			break;
		}
		n/=10;
	}
	if(flag==1)
	{
		cout<<"So "<<temp1<<" co toan chu so la so chan"<<endl;
	}
	else
	{
		cout<<"So "<<temp1<<" khong hoan toan co toan chu so la so chan"<<endl;
	}
	return 0;
}
