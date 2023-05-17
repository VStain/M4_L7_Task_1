#include <iostream>
#include "Math_func.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

 
    int a, b, selection;

    cout << "Введите два числа" << endl;
    cout << "Первое число: ";
    cin >> a;
    cout << "Второе число: ";
    cin >> b;

    cout << "Выберите мат. операцию:" << endl
        << "1. Сложение. " << endl
        << "2. Вычитание." << endl
        << "3. Умножение. " << endl
        << "4. Деление." << endl
        << "5. Возведение в степень" << endl;

    cin >> selection;

    switch (selection)
    {
    case 1:
        cout << "Результат : " << addition(a,b) << endl;
        break;
    case 2:
        cout << "Результат : " << subtraction(a,b) << endl;
        break;
    case 3:
        cout << "Результат : " << multiplication(a,b) << endl;
        break;
    case 4:
        cout << "Результат : " << division(a,b) << endl;
        break;
    case 5:
        cout << "Рузультат : " << power(a, b) << endl;
    default:
        cout << endl << "Ошибка! Попробуйте заново. " << endl;
        break;
    }

    return 0;
}

