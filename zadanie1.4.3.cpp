#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int sum, g;

    cout << "¬ведите целое число: " << endl;
    cin >> g;

    for (int i=1; i<=10; i++)
    {
        sum = g * i;
        cout << g << " х " << i << " = " << sum << endl;
        
    }
      
    return EXIT_SUCCESS;
}