//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int sum1=0,sum2=1;
	for(int i=1;i<=n;i++)
	{
		sum2=sum2*i;
		sum1+=sum2;
	}
	cout<<"S(n) = "<<sum1<<endl;
	return 0;
}
