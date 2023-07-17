//Bai 106: Viet ctrinh nhap 1 so nguyen co 3 chu so. In ra man hinh cach do so nguyen nay

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	while(n<100&&n>999)
	{
		cout<<"Nhap sai, nhap lai n trong [100 ; 999]: ";
		cin>>n;
	}
	
	string tr[]={"","mot tram","hai tram","ba tram","bon tram","nam tram","sau tram","bay tram","tam tram","chin tram"};
	string ch[]={"linh","muoi","hai muoi","ba muoi","bon muoi","nam muoi","sau muoi","bay muoi","tam muoi","chin muoi"};
	string dvi[]={"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
	
	int i_dvi=n%10;
	int i_ch= (n/10) %10;
	int i_tr=n/100;
	if(n==100)
	{
		cout<<n<<" doc thanh: "<<tr[i_tr]<<endl;
	}
	else
	{
		cout<<n<<" doc thanh: "<<tr[i_tr]<<" "<<ch[i_ch]<<" "<<dvi[i_dvi]<<endl;
	}
	return 0;
}
