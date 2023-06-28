//Bai 30: Nhap 1 so nguyen duong n. Kiem tra xem n co phai la so hoan thien hay khong

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
	if(sum==n)
	{
		cout<<n<<" la so hoan thien"<<endl;
	}
	else
	{
		cout<<n<<" khong la so hoan thien"<<endl;
	}
	return 0;
}
