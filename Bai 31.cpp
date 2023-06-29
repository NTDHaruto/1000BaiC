//Bai 31: Cho so nguyen duong n. Kiem tra xem n co phai la so nguyen to hay khong

#include<iostream>

using namespace std;

int main()
{
	int n,cnt=0;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	if(n==1||n==2)
	{
		cout<<n<<" la so nguyen to"<<endl;
	}
	else
	{
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				cnt++;
				break;
			}
		}
		if(cnt!=0)
		{
			cout<<n<<" khong la so nguyen to"<<endl;
		}
		else
		{
			cout<<n<<" la so nguyen to"<<endl;
		}
	}
	return 0;
}
