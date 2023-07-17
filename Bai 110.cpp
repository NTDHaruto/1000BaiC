//Bai 110: Can co tong 200000 ngan dong tu 3 loai giay bac: 1000, 2000, 5000. Lap ctrinh tim tat ca cac phuong an co the

#include <iostream>

using namespace std;

void findCombinations(int totalAmount, int n1000, int n2000, int n5000);

int main()
{
    int totalAmount = 200000;
    int n1000, n2000, n5000;

    cout << "Nhap so to 1000 dong: ";
    cin >> n1000;
    cout << "Nhap so to 2000 dong: ";
    cin >> n2000;
    cout << "Nhap so to 5000 dong: ";
    cin >> n5000;

    findCombinations(totalAmount, n1000, n2000, n5000);

    return 0;
}

void findCombinations(int totalAmount, int n1000, int n2000, int n5000)
{
    for (int x = 0; x <= n1000; x++)
    {
        for (int y = 0; y <= n2000; y++)
        {
            for (int z = 0; z <= n5000; z++)
            {
                if (x * 1000 + y * 2000 + z * 5000 == totalAmount)
                {
                    cout << "Phuong an: " << x << " x 1000 + " << y << " x 2000 + " << z << " x 5000 = " << totalAmount << " dong" << endl;
                }
            }
        }
    }
}

