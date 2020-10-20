// Lab_02.cpp
// Турко Артем
// Лабораторна робота № 2
// Лінійні програми.
// Варіант 22
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a; // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    // double z2; // результат обчислення 2-го виразу
    double Pi = 4 * atan(1.);

    cout << "a = "; cin >> a;

    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
    // z2 = 2 * sqrt(2) * cos(a) * sin(Pi / 4 + 2 * a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "Pi = " << Pi << endl;
    // cout << "z2 = " << z2 << endl;

    cin.get();

    return 0;
}