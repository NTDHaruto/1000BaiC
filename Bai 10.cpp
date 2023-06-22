//Bài 10: Tính T(x, n) = x^n

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x,n;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	int sum=pow(x,n);
	cout<<"T(x,n) = "<<sum<<endl;
	return 0;
}
