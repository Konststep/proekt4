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
          
    do 
    {
        cout << "¬ведите целое число или число '0', чтобы закончить: " << endl;
        cin >> g;
        sum = sum + g;
    }
    
    while (g != 0);
    {
        cout << "—умма: " << sum << endl;
    }
    
    return EXIT_SUCCESS;
}