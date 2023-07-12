//Bai 87: Tim so nguyen duong n nho nhat sao cho 1 + 2 + 3 + ... + n > 10000

#include<iostream>

using namespace std;

int main()
{
	int sum=0,i=1;
	while(sum<10000)
	{
		sum+=i;
		i++;
	}
	cout<<"So nguyen duong n nho nhat = "<<i-1<<endl;
	return 0;
}
