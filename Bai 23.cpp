//Bai 23: Dem so luong uoc so cua so nguyen duong n
#include<iostream>

using namespace std;

int main()
{
	int n,count=0;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			int j=n/i;
			if(i!=j)
			{
				count++;
			}
		}
	}
	cout<<"Ket qua = "<<count<<endl;
	return 0;
}
