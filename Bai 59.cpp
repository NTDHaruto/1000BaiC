#include <iostream>

using namespace std;

bool isPalindrome(int n) {
    int reversedNum = 0;
    int originalNum = n;
    while (n > 0) {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }
    return (reversedNum == originalNum);
}

int main() {
    int num;
    cout << "Nhap so nguyen duong n: ";
    cin >> num;

    if (isPalindrome(num)) 
	{
        cout << num << " la so doi xung" << std::endl;
    } 
	else 
	{
        cout << num << " khong la so doi xung" << std::endl;
    }

    return 0;
}

