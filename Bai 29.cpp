//Bai 29: Tim uoc so le lon nhat cua so nguyen duong n

#include<iostream>

using namespace std;

int main()
{
	int n,max=0;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2!=0)
			{
				if(max<i)
				{
					max=i;
				}
			}
		}
	}
	cout<<"Uoc so le lon nhat cua "<<n<<" la = "<<max<<endl;
	return 0;
}
