//B�i 75: Kiem tra so nguy�n 4 byte c� dang 2^k hay kh�ng

#include <iostream>

using namespace std;

bool isPowerOfTwo(int n);

int main() {
    int number;
    cout << "Nhap so nguyen: ";
    cin >> number;
    if (isPowerOfTwo(number)) 
	{
        cout << number << " co dang 2^k." <<endl;
    } 
	else 
	{
        cout << number << " khong co dang 2^k." <<endl;
    }

    return 0;
}

bool isPowerOfTwo(int n) 
{
    return (n & (n - 1)) == 0;
}

