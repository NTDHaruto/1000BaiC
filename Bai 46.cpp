//Bai 46: Hay dem so luong chu so le cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n,temp1,cnt=0;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	temp1=n;
	while(n!=0)
	{
		int temp2=n%10;
		if(temp2%2!=0)
		{
			cnt++;
		}
		n/=10;
	}
	cout<<"So luong chu so le cua "<<temp1<<" la "<<cnt<<" chu so"<<endl;
	return 0;
}
