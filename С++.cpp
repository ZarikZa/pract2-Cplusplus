#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    setlocale(LC_ALL, "RUS");
    int a = 1;
    int b = 1;
    int c;
    while (true)
    {
        cout << "\nВыберите: \n1. Сложение\n2. Вычитание\n3. Частное\n4. Произведение\n5. Возведение в степень\n6. Нахождения квадратного корня\n7. Нахождение 1 процента от числа\n8. Найти факториал числа\n9. Выйти из программы\n";
        cout << "-----------------------------------" << endl;
        cin >> c;
        if (c == 1 || c == 2 || c == 3 || c == 4 || c == 5)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            switch (c)
            {
            case 1:
                cout << a + b;
                break;
            case 2:
                cout << a - b;
                break;
            case 3:
                if (b == 0)
                {
                    cout << "На 0 делить нельзя";
                }
                else
                {
                    cout << a / b;
                }
                break;
            case 4:
                cout << a * b;
                break;
            case 5:
                cout << pow(a, b);
                break;
            }
        }
        else if (c == 6 || c == 7 ||c == 8)
        {
            cout << "Введите число: ";
            cin >> a;
            switch (c)
            {
                case 6:
                    cout << sqrt(a);
                    break;
                case 7:
                    cout << a / 100;
                    break;
                case 8:
                    int i = 1;
                    int fact = 1;
                    for (i = 1; i <= a; i++)
                    {
                        fact = fact * i;
                    }
                    cout << fact;
                    break;
            }
        }
        else
        {
            return 0;
        }
    }
}