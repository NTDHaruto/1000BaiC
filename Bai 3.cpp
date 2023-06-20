//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n

#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	cout<<"Nhap so nguyen duong n: ";
	int n;
	cin>>n;
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+(1/(float)i);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<sum<<endl;
	return 0;
}
