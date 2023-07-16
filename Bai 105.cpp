//Bai 105: Viet chuong trinh nhap 1 so nguyen co 2 chu so. In ra cach doc cua so nguyen nay

#include <iostream>
#include <string>

using namespace std;

int main() {
    const string ones[] = { "", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin" };
    const string tens[] = { "", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi",
	 "bay muoi", "tam muoi", "chin muoi" };

    int number;
    cout << "Nhap mot so nguyen co hai chu so: ";
    cin >> number;

    if (number < 10 || number > 99) {
        cout << "Vui long nhap mot so nguyen co hai chu so"<<endl;
        return 1;
    }

    int tens_digit = number / 10;
    int ones_digit = number % 10;

    cout << "Cach doc cua so " << number << " la: " << tens[tens_digit] << " " << ones[ones_digit] << endl;

    return 0;
}

