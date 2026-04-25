#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int sum, g, i;
    sum = 0;
    cout << "¬ведите целое число: " << endl;
    cin >> g;

    while (g != 0)
    {
        i = g % 10;
        sum = sum + i;
        g = g / 10;
        
    }

    cout << "—умма: " << sum << endl;
    return EXIT_SUCCESS;
}