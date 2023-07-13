//Bai 94: Viet chuong trinh in ra cac so le nho hon 100 tru cac so 5, 7, 93

#include<iostream>

using namespace std;

int main()
{
	for(int i=1;i<100;i+=2)
	{
		if(i!=5 && i!=7 && i!= 93)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
