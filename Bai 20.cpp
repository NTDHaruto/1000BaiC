//Bài 20: Liet ke tat ca cac uoc so cua so nguyen duong n

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;pow(i,2)<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"  ";
			int j=n/i;
			if(i!=j)
			{
				cout<<j<<"  ";
			}	
		}
	}
	return 0;	
}
