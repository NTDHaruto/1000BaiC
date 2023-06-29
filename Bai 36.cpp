//Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n - 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dau can

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int GiaiThua(int n);

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	float sum=sqrt(1);
	for(int i=2;i<=n;i++)
	{
		int giaiThua=GiaiThua(i);
		sum+=sqrt(giaiThua+sum);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<sum<<endl;
	return 0;
}

int GiaiThua(int n)
{
	int sum=1;
	for(int i=2;i<=n;i++)
	{
		sum*=i;
	}
	return sum;
}
