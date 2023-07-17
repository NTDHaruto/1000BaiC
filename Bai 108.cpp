//Bai 108: Viet ham tinh x^y

#include<iostream>
#include<math.h>

using namespace std;

double LuyThua(double x, double y);

int main()
{
	double x,y;
	cout<<"Nhap so nguyen x, y: ";
	cin>>x>>y;
	cout<<"Luy thua "<<x<<"^"<<y<<" = "<<LuyThua(x,y)<<endl;
	return 0;
}

double LuyThua(double x, double y)
{
	return pow(x,y);
}
