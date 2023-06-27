//Bài 22: Tinh tich tat ca cac uoc so cua so nguyen duong n

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n,result=1;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			result*=i;
			int j=n/i;
			if(i!=j)
			{
				result*=j;
			}
		}
	}
	cout<<"Ket qua = "<<result<<endl;
	return 0;
}
