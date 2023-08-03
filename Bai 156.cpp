//Bai 156: Tim gia tri trong mang so thuc gan gai tri X nhat

#include <iostream>
#include <cmath>
using namespace std;

// Hàm tìm giá tr? trong m?ng g?n giá tr? x nh?t
double findNearestValue(double arr[], int n, double x) {
    double nearest_distance = abs(arr[0] - x); // Kh?i t?o kho?ng cách g?n nh?t b?ng kho?ng cách c?a ph?n t? d?u tiên trong m?ng
    double nearest_value = arr[0]; // Kh?i t?o giá tr? g?n nh?t b?ng giá tr? c?a ph?n t? d?u tiên trong m?ng

    for (int i = 1; i < n; i++) {
        double distance = abs(arr[i] - x); // Tính kho?ng cách gi?a ph?n t? th? i và x
        if (distance < nearest_distance) {
            nearest_distance = distance; // C?p nh?t kho?ng cách g?n nh?t
            nearest_value = arr[i]; // C?p nh?t giá tr? g?n nh?t
        }
    }

    return nearest_value;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    double *arr = new double[n];

    cout << "Nhap cac phan tu trong mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double x;
    cout << "Nhap gia tri x: ";
    cin >> x;

    double nearest_value = findNearestValue(arr, n, x);
    cout << "Gia tri trong mang gan gia tri x nhat la: " << nearest_value << endl;

    delete[] arr;
    return 0;
}

