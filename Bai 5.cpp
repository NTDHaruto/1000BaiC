//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)

#include<math.h>
#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	float sum=1;
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=1/(float)(2*i+1);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<sum<<endl;
	return 0;
}
