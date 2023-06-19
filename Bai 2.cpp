//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	cout<<"Nhap so nguyen duong n: ";
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=pow(i,2);
	}
	cout<<"S(n) = "<<sum<<endl;
	system("pause");
	return 0;
}
