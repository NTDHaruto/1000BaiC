//Bai 26: Tinh tích tat ca cac uoc so le cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n,result=1;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2!=0)
			{
				result*=i;
			}
		}
	}
	cout<<"Ket qua = "<<result<<endl;
	return 0;
}
