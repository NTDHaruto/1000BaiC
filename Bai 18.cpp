//Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int KetQuaGiaiThua(int n);

int main()
{
	int x,n;
	cout<<"Nhap so nguyen duong x, n: ";
	cin>>x>>n;
	float result=1;
	for(int i=1;i<=n;i++)
	{
		int temp=KetQuaGiaiThua(i);
		result+=(float)pow(x,(float)(2*i)/temp);
	}
	cout<<"S(n) = "<<setprecision(2)<<fixed<<result<<endl;
	return 0;
}

int KetQuaGiaiThua(int n)
{
	int temp=2*n,result=1;
	for(int i=1;i<=temp;i++)
	{
		result*=temp;
	}
	return result;
}
