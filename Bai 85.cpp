//Bai 85: Nhap vao 1 thang cua 1 nam, cho biet thuoc quy may trong nam

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap thang trong nam: ";
	cin>>n;
	while(n<1||n>12)
	{
		cout<<"Nhap lai thang cho dung: ";
		cin>>n;
	}
	switch(n)
	{
		case 1: case 2: case 3:
			cout<<"Thang "<<n<<" thuoc Quy 1 trong nam"<<endl;
			break;
		case 4: case 5: case 6:
			cout<<"Thang "<<n<<" thuoc Quy 2 trong nam"<<endl;
			break;
		case 7: case 8: case 9:
			cout<<"Thang "<<n<<" thuoc Quy 3 trong nam"<<endl;
			break;
		default:
			cout<<"Thang "<<n<<" thuoc Quy 4 trong nam"<<endl;
			break;
	}
	return 0;
}
