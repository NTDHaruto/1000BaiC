//Bài 76: Kiem tra so nguyên 4 byte có dang 3^k hay không

#include <iostream>

using namespace std;

bool isPowerOfThree(int n);

int main() {
    int number;
    cout << "Nhap so nguyen: ";
    cin >> number;
    if (isPowerOfThree(number)) 
	{
        cout << number << " co dang 3^k." <<endl;
    } 
	else 
	{
        cout << number << " khong co dang 3^k." <<endl;
    }

    return 0;
}

bool isPowerOfThree(int n) 
{
    if (n <= 0) {
        return false;
    }

    while (n % 3 == 0) {
        n /= 3;
    }

    return n == 1;
}


