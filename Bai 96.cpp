//Bai 96: Viet chuong trinh nhap gia tri x sau do tinh gia tri cua ham so
//f(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x - 9 khi x < 5

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x;
	cout<<"Nhap so nguyen duong x: ";
	cin>>x;
	int sum;
	if(x>=5)
	{
		sum=2*pow(x,2)+5*x+9;
	}
	else
	{
		sum=-2*pow(x,2)+4*x-9;
	}
	cout<<"f(x) = "<<sum<<endl;
	return 0;
}
