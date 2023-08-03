#include <iostream>
#include <cmath>
using namespace std;

// Hàm tìm giá tr? cách xa X du?c nh?p nh?t trong m?ng
double findMaxDistance(double arr[], int n, double X) {
    double max_distance = 0.0;
    double val=0;
    for (int i = 0; i < n; i++) {
        double distance = abs(arr[i] - X);
        if (distance > max_distance) {
            max_distance = distance;
            val=arr[i];
        }
    }
    return val;
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

    double X;
    cout << "Nhap gia tri X: ";
    cin >> X;

    double val = findMaxDistance(arr, n, X);
    cout << "Gia tri cach xa X duoc nhap nhat trong mang la: " << val << endl;

    delete[] arr;
    return 0;
}

