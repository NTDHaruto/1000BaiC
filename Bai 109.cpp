//Bai 109: Viet chuong trinh in bang cuu chuong ra man hinh

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			cout<<"|| "<<j<<"x"<<i<<"="<<setfill(' ')<<setw(3)<<j*i<<" ";
		}
		cout<<"||"<<endl;
	}
	return 0;
}
