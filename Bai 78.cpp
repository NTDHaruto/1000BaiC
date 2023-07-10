//Bai 78: Liet ke tat ca cac uoc so cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	cout<<"Cac uoc so cua "<<n<<endl;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"    ";
			int j=n/i;
			if(i!=j)
			{
				cout<<j<<"    ";
			}
		}
	}
	cout<<endl;
	return 0;
}
