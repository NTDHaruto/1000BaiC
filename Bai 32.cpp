//Bai 32: Cho so nguyen duong n. Kiem tra xem n co phai la so chinh phuong hay khong

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int temp=(int)sqrt(n);
	if(pow(temp,2)==n)
	{
		cout<<n<<" la so chinh phuong"<<endl;
	}
	else
	{
		cout<<n<<" khong la so chinh phuong"<<endl;
	}
	return 0;
}
