//Bai 42: Cho n la so nguyen duong. Hay tim gia tri nguyen duong k lon nhat sao cho S(k) < n.
//Trong do chuoi k duoc dinh nghia nhu sau: S(k) = 1 + 2 + 3 + … + k

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	cout<<"k = "<<ceil(sqrt(2*n))-1<<endl;;
	return 0;
}
