//Bai 28: Cho so nguyen duong n, tinh tong cac uoc so nho hon chinh no

#include<iostream>

using namespace std;

int main()
{
	int n,sum=0;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	cout<<"Tong cac uoc so nho hon "<<n<<" la = "<<sum<<endl;
	return 0;
}
