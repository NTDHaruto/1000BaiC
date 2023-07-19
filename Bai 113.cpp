//Bài 113: lap ctrinh tinh Sin(x) voi do chinh xac 0.00001 theo cong thuc
//Sin(x) = x - x^3/3! + x^5/5! + … + (-1)^n . x^2n + 1/(2n + 1)!

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iomanip>
#define eps 1e-4

using namespace std;

int main()
{
	float s, t, x, luyThua, giaiThua;
	int i, dau = -1;

	cout<<"Nhap x (Radian): ";
	cin>>x;

	giaiThua = 1;
	s = t = luyThua = x;
	for(i = 3; t > eps; i += 2, dau = -dau)
	{
		t = (luyThua *= x * x) / (giaiThua *= i * (i - 1));
		s += dau * t;
	}
	cout<<"Cong thuc Taylor: sin ("<<setprecision(2)<<fixed<<x<<") = "<<setprecision(4)<<fixed<<s<<endl;
	cout<<"Sin() cua math.h: Sin("<<setprecision(2)<<fixed<<x<<") = "<<setprecision(4)<<fixed<<sin(x)<<endl;
	return 0;
}

