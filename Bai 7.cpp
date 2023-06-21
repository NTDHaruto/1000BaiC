//Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1

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
		sum+=(float)i/(i+1);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<sum<<endl;
	return 0;
}
