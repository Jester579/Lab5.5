#include <iostream>
#include <Windows.h>
using namespace std;

int Q(int m, int n) 
{
    if (m == 1 || n == 1) 
        return 1;
    if (m < n) 
        return Q(m, m);
    if (m == n) 
        return 1 + Q(m, n - 1);
    return Q(m, n - 1) + Q(m - n, n); 
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int m, n;

    cout << "������ �������� m: ";cin >> m;
    cout << "������ �������� n: ";cin >> n;

    int c = Q(m, n);

    cout << "ʳ������ �������� ����� " << m << " � ���������, �� �� ����������� " << n << " = " << c << endl;

    return 0;
}
