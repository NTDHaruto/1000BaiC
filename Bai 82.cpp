//Bai 82: Viet chuong trinh tim so lon nhat trong 3 so thuc a,b,c

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,c;
	cout<<"Nhap so thuc a,b,c: ";
	cin>>a>>b>>c;
	cout<<"So lon nhat trong 3 so thuc "<<a<<", "<<b<<", "<<c<<" la = "<<max(a,max(b,c))<<endl;
	return 0;
}
