//Bai 60: Hay kiem tra cac chu so cua so nguyen duong n co tang dan tu trai sang phai hay khong

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int temp1=n,temp2=n%10,flag=1;
	n/=10;
	while(n!=0)
	{
		int temp3=n%10;
		if(temp3>temp2)
		{
			flag=0;
			break;
		}
		temp2=temp3;
		n/=10;
	}
	if(flag==1)
	{
		cout<<temp1<<" gom cac chu so tang dan tu trai sang phai"<<endl;
	}
	else
	{
		cout<<temp1<<" khong hoan toan co cac chu so tang dan tu trai sang phai"<<endl;
	}
	return 0;
}
