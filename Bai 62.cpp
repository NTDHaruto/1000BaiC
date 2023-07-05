//Bai 62: TIm UCLN cua 2 so a, b

#include<iostream>

using namespace std;

int UCLN(int a, int b);

int main()
{
	int a,b;
	cout<<"Nhap 2 so a, b: ";
	cin>>a>>b;
	cout<<"UCLN cua 2 so "<<a<<" "<<b<<" la = "<<UCLN(a,b)<<endl;
	return 0;
}

int UCLN(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	return UCLN(b,a%b);
}
