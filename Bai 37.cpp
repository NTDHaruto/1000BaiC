//Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 d?u can

#include <iostream>
#include <cmath>

double calculateS(int n) {
    if (n == 2) {
        return std::sqrt(2.0);
    } else {
        return std::sqrt(n + calculateS(n - 1));
    }
}

int main() {
    int n;
    std::cout << "Nhap so nguyen duong n: ";
    std::cin >> n;

    double result = calculateS(n);
    std::cout << "Giá tri cua S(n) là: " << result << std::endl;

    return 0;
}

