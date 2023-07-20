//Bai 115: Viet ctrinh nhap ten, diem toan, diem van cua 1 hsinh. Tinh diem trung binh va xuat ra ket qua

#include<iostream>
#include<iomanip>
#define SIZE 100

using namespace std;

int main()
{
	char ten[SIZE];
	float diemToan,diemVan;
	cout<<"Nhap Ten hoc sinh: ";
	gets(ten);
	fflush(stdin);
	cout<<"Nhap diem Toan va diem Van: ";
	cin>>diemToan>>diemVan;
	float diemTB=(diemToan+diemVan)/2;
	cout<<"Diem TB cua hs: "<<ten<<" la = "<<setprecision(2)<<fixed<<diemTB<<endl;
	return 0;
}
