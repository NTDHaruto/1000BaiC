//Bai 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dau can

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	float sum=sqrt((float)2);
	for(int i=2;i<=n;i++)
	{
		sum+=sqrt(2+sum);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<sum<<endl;
	return 0;
}
