//Bai 53: Hay dem so luong chu so lon nhat cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int temp1=n,cnt=0,max=0;
	while(n!=0)
	{
		int temp2=n%10;
		if(max==temp2)
		{
			cnt++;
		}
		if(max<temp2)
		{
			max=temp2;
			cnt=1;
		}
		n/=10;
	}
	cout<<"So luong chu so lon nhat trong "<<temp1<<" la chu so "<<max<<" voi "<<cnt<<" lan"<<endl;
	return 0;
}
