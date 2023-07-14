//Bai 98: Lap phuong trinh giai he Ax + By = C va Dx + Ey = F. Cac he so duoc nhap tu ban phim

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    float a, b, c, d, e, f;

    cout<<"Nhap gia tri cho A, B, C, D, E, F: ";
    cin>>a>>b>>c>>d>>e>>f;

    float det = a * e - b * d;
    if (det == 0) {
        cout << "He phuong trinh vo nghiem" << endl;
    } else {
        float x = (c * e - b * f) / det;
        float y = (a * f - c * d) / det;
        cout << "Nghiem cua he phuong trinh la:" << endl;
        cout << "x = " <<setprecision(2)<<fixed<< x << endl;
        cout << "y = " <<setprecision(2)<<fixed<< y << endl;
    }

    return 0;
}

