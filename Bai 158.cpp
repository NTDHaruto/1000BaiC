//Bai 158: Tim gia tri x sao cho mang so thuc duoc nhap duoc chua trong doan [-x, x]

#include <iostream>
#include <cmath> // d? s? d?ng hàm abs() tính giá tr? tuy?t d?i

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu mang: ";
    cin >> n;

    double* arr = new double[n];

    cout << "Nhap cac phan tu mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Tìm giá tr? l?n nh?t và nh? nh?t trong m?ng
    double minVal = arr[0];
    double maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Tìm giá tr? x sao cho do?n [-x, x] ch?a t?t c? các giá tr? trong m?ng
    double x = max(abs(minVal), maxVal);

    cout << "Gia tri x can tim: " << x << endl;

    delete[] arr;
    return 0;
}

