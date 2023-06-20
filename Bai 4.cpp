//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n

#include<math.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=(1/(float)(2*i));
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<sum<<endl;
	return 0;
}
