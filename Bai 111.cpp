//Bai 111: Viet ctrinh in ra tam giac can co do cao h
//a) Tam giac can dac nam giua man hinh
//b) Tam giac can rong nam giua man hinh
//c) Tam giac vuong can dac
//d) Tam giac vuong can rong

#include <iostream>

using namespace std;

void printChar(char c, int n);
void printSolidIsoscelesTriangle(int h);
void printHollowIsoscelesTriangle(int h);
void printSolidRightIsoscelesTriangle(int h);
void printHollowRightIsoscelesTriangle(int h);

int main() {
    int h;
    cout << "Nhap chieu cao h: ";
    cin >> h;
    
    cout << "a. Tam giac can dac:" << endl;
    printSolidIsoscelesTriangle(h);

    cout << "\nb. Tam giac can rong:" << endl;
    printHollowIsoscelesTriangle(h);
    
    cout << "\nc. Tam giac vuong can dac:" << endl;
    printSolidRightIsoscelesTriangle(h);

    cout << "\nd. Tam giac vuong can rong:" << endl;
    printHollowRightIsoscelesTriangle(h);

    return 0;
}

void printHollowRightIsoscelesTriangle(int h) 
{
    cout << '*' << endl;

    for (int i = 2; i < h; i++) 
	{
        cout << '*';
        printChar(' ', i - 2);
        cout << '*' << endl;
    }

    if (h > 1) 
	{
        printChar('*', h);
    }
    cout << endl;
}

void printSolidRightIsoscelesTriangle(int h) 
{
    for (int i = 1; i <= h; i++) 
	{
        printChar('*', i);
        cout << endl;
    }
}

void printHollowIsoscelesTriangle(int h) 
{
    printChar(' ', h - 1);
    cout << '*' << endl;
    
    for (int i = 2; i < h; i++) 
	{
        printChar(' ', h - i);
        cout << '*';
        printChar(' ', 2 * i - 3);
        cout << '*' << endl;
    }
    
    if (h > 1) 
	{
        printChar('*', 2 * h - 1);
    }
    cout << endl;
}

void printSolidIsoscelesTriangle(int h) 
{
    for (int i = 1; i <= h; i++)
	{
        printChar(' ', h - i);
        printChar('*', 2 * i - 1);
        cout << endl;
    }
}

void printChar(char c, int n)
{
    for (int i = 0; i < n; i++) 
	{
        cout << c;
    }
}


