#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(0, "");
    double a;
    double b;
    double c;
    double d;
    cout << "������ ����� �����: ";
    cin >> a;
    cout << "������ ����� �����: ";
    cin >> b;
    cout << "������ ��������: ";
    cin >> d; 
        if (d == 1)
            c = a + b;
        if (d == 2)
            c = a - b;
        if (d == 3)
            c = a * b;
        if (d == 4)
            c = a / b;
    cout << "��������� = " << c << endl; 
    system("pause");
    return 0;
}