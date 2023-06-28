//Bai 27: Dem so luong uoc so chan cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n,cnt=0;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2==0)
			{
				cnt++;
			}
		}
	}
	cout<<"Co tong cong "<<cnt<<" uoc so le"<<endl;
	return 0;
}
