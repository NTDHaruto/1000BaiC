//Bai 101: Viet ctrinh nhap thang nam, cho biet thang do co bao nhieu ngay

#include<iostream>

using namespace std;

int CheckYear(int y);
int CheckMonth(int m,int y);

int main()
{
	int m,y;
	cout<<"Nhap thang, nam: ";
	cin>>m>>y;
	cout<<"Thang "<<m<<" nam "<<y<<" co "<<CheckMonth(m,y)<<" ngay"<<endl;
	return 0;
}

int CheckMonth(int m,int y)
{
	int rs=0;
	switch(m)
	{
		case 4: case 6: case 9: case 11:
			rs = 30;
			break;
		case 2:
			if(CheckYear(y)==1)
			{
				rs = 29;
			}
			else
			{
				rs=28;
			}
			break;
		default:
			rs=31;
			break;
	}
	return rs;
}

int CheckYear(int y)
{
	if(y%400==0 || (y%4==0 && y%100!=0))
	{
		return 1;
	}
	return 0;
}
