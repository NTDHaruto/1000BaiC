//Bai 102 + 103: Viet ctrinh nhap 1 ngay, thang, nam. Cho biet ngay mai va ngay hom qua

#include<iostream>
#include<iomanip>

using namespace std;

int DayInMonth(int m, int y);

int main()
{
	int d,m,y;
	cout<<"Nhap ngay, thang, nam: ";
	cin>>d>>m>>y;
	
	d=(d % DayInMonth(m,y))+1;
	if(d==1)
	{
		m=(m%12)+1;
	}
	cout<<"Ngay mai: "<<setfill('0')<<setw(2)<<d<<"/"<<setfill('0')<<setw(2)<<m<<"/"<<y+(m==1&&d==1)<<endl;
	
	cout<<"Nhap ngay, thang, nam: ";
	cin>>d>>m>>y;
	
	if(d==1)
	{
		if(m==1)
		{
			m=12;
			y--;
		}
		else
		{
			m--;
		}
		d=DayInMonth(m,y);
	}
	else
	{
		d--;
	}
	cout<<"Hom qua: "<<setfill('0')<<setw(2)<<d<<"/"<<setfill('0')<<setw(2)<<m<<"/"<<y<<endl;
	return 0;
}

int DayInMonth(int m, int y)
{
	switch(m)
	{
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			if(y%400==0 || (y%4==0 && y%100!=0))
			{
				return 29;
			}
			return 28;
		default:
			return 31;
	}
}
