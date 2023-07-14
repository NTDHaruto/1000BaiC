//Bai 97: Viet chuong trinh nhap 3 canh cua tam giac, cho biet do la tam giac gi

#include<iostream>
#include<math.h>
#define eps 1e-10

using namespace std;

int main()
{
	float a,b,c;
	cout<<"Nhap do dai 3 canh cua tam giac: ";
	cin>>a>>b>>c;
	if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
	{
		int f=0;
		if(a == b || b == c || c == a)
		{
			f+=1;
		}
		if(a == b && b == c)
		{
			f+=1;
		}
		if ( fabs( a * a + b * b - c * c ) < eps ||
				fabs( a * a + c * c - b * b ) < eps ||
					fabs( b * b + c * c - a * a ) < eps )
		{
			f += 3;
		} 
		switch(f)
		{
			case 0:
				cout<<"Tam giac thuong"<<endl;
				break;
			case 1:
				cout<<"Tam giac can"<<endl;
				break;
			case 2:
				cout<<"Tam giac deu"<<endl;
				break;
			case 3:
				cout<<"Tam giac vuong"<<endl;
				break;
			default:
				cout<<"Tam giac vuong can"<<endl;
				break;
		}		
	}
	else
	{
		cout<<"Nhap sai, khong hop le"<<endl;
	}
	return 0;
}
