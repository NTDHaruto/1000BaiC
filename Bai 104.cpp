//Bai 104: Nhap ngay, thang, nam. Kiem tra xem la ngay thu may trong nam

#include<iostream>

using namespace std;

int main()
{
	int d,m,y;
	cout<<"Nhap ngay, thang, nam: ";
	cin>>d>>m>>y;
	int sum=(int) (30.42 * (m - 1)) + d;
	if(m=2 || ( (y%400==0 || (y%4==0 && y%100!=0) && m>2) ))
	{
		sum+=1;
	}
	if(2<m<8)
	{
		sum-=1;
	}
	cout<<"Ngay thu "<<sum<<" trong nam"<<endl;
	return 0;
}
