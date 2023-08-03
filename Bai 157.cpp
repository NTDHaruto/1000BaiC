//Bai 157: Cho mang 1 chieu cac so thuc, tim doan [a,b] sao cho chua het cac gia tri trong mang

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    double *arr = new double[n];

    cout << "Nhap cac phan tu trong mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double a = numeric_limits<double>::max(); // Kh?i t?o giá tr? a b?ng giá tr? l?n nh?t c?a ki?u double
    double b = numeric_limits<double>::min(); // Kh?i t?o giá tr? b b?ng giá tr? nh? nh?t c?a ki?u double

    for (int i = 0; i < n; i++) {
        if (arr[i] < a) {
            a = arr[i]; // Tìm giá tr? nh? nh?t trong m?ng
        }
        if (arr[i] > b) {
            b = arr[i]; // Tìm giá tr? l?n nh?t trong m?ng
        }
    }

    cout << "Doan [a, b] chua het cac gia tri trong mang la [" << a << ", " << b << "]" << endl;

    delete[] arr;
    return 0;
}

