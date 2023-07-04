//Bai 52: Hay tim chu so nho nhat cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int temp1=n,max=10;
	while(n!=0)
	{
		int temp2=n%10;
		if(max>temp2)
		{
			max=temp2;
		}
		n/=10;
	}
	cout<<"Chu so lon nhat cua "<<temp1<<" la = "<<max<<endl;
	return 0;
}
