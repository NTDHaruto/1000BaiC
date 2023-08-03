//Bai 161: cho mang 1 chieu cac so nguyen. tim gia tri dau tien nam trong khoang [x,y] cho truoc. neu khong co thi tra ve -1
//vi du cac phan tu trong mang co gia tri tu 1-100

#include <iostream>
using namespace std;

int findValueInRange(int arr[], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x && arr[i] <= y) {
            return arr[i]; // Tr? v? giá tr? n?m trong kho?ng [x, y]
        }
    }
    return -1; // Không tìm th?y giá tr? n?m trong kho?ng [x, y]
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x, y;
    cout << "Nhap gia tri x: ";
    cin >> x;
    cout << "Nhap gia tri y: ";
    cin >> y;

    int result = findValueInRange(arr, n, x, y);

    if (result != -1) {
        cout << "Gia tri dau tien nam trong khoang [" << x << ", " << y << "]: " << result << endl;
    } else {
        cout << "Khong co gia tri nao nam trong khoang [" << x << ", " << y << "]." << endl;
    }

    delete[] arr;
    return 0;
}
