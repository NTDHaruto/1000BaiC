//Bai 79: Hay dem so luong chu so cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int cnt=0;
	while(n!=0)
	{
		cnt++;
		n/=10;
	}
	cout<<"Co "<<cnt<<" chu so"<<endl;
	return 0;
}
