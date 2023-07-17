//Bai 107: Viet ham tinh can bac N cua x

#include<iostream>
#include<math.h>

using namespace std;

double CanBacN(double x, double n);

int main()
{
	double x,n,sum;
	cout<<"Nhap so nguyen x, n: ";
	cin>>x>>n;
	sum=CanBacN(x,n);
	cout<<"Can Bac "<<n<<" cua "<<x<<" = "<<sum<<endl;
	return 0;
}

double CanBacN(double x, double n)
{
	return pow(x,1.0/n);
}
