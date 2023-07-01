//Bai 43: Nhap so nguyen duong n. Dem so luong chu so

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int cnt=0,temp=n;
	while(n!=0)
	{
		n/=10;
		cnt++;
	}
	cout<<"So luong chu so cua "<<temp<<" la = "<<cnt<<endl;
	return 0;
}
