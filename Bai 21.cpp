//Bai 21: Tinh tong tat ca cac uoc so cua so nguyen duong n

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int sum=0;
	for(int i=1;pow(i,2)<=n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
			int j=n/i;
			if(i!=j)
			{
				sum+=j;
			}
		}
	}
	cout<<"Tong cac uoc so cua "<<n<<" la: "<<sum<<endl;
	return 0;
}
