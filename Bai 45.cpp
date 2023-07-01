//Bai 45: Nhap so nguyen duong n. Tinh tich cac chu so 

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int rs=1,temp1=n;
	while(n!=0)
	{
		int temp2=n%10;
		rs*=temp2;
		n/=10;
	}
	cout<<"Tich cac chu so cua "<<temp1<<" la = "<<rs<<endl;
	return 0;
}
