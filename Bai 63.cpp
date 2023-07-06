//Bai 63: Cho 2 so a va b. Tim BCNN cua 2 so

#include<iostream>

using namespace std;

int UCNN(int a, int b);
int BCNN(int a, int b);

int main()
{
	int a,b;
	cout<<"Nhap 2 so nguyen duong a, b: ";
	cin>>a>>b;
	cout<<"BCNN cua 2 so "<<a<<" va "<<b<<" la = "<<BCNN(a,b)<<endl;
	return 0;
}

int BCNN(int a, int b)
{
	int uCNN=UCNN(a,b);
	return (a*b)/uCNN;
}

int UCNN(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	return UCNN(b,a%b);
}

