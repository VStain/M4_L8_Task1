﻿/* Задача 1. Препроцессорные директивы
В этом задании вы используете некоторые препроцессорные директивы, которые вы изучили ранее.

В вашей программе выполните действия:

Объявите символьную константу MODE с целочисленным значением.
Проверьте, что константа определена, иначе программа не должна скомпилироваться и должна выдать сообщение о необходимости определить MODE.
В случае, если MODE имеет значение 0, выведите на консоль «Работаю в режиме тренировки».
Если MODE имеет значение 1, определите функцию add, которая должна складывать два числа. Выведите на консоль «Работаю в боевом режиме», попросите пользователя ввести два числа и выведите результат сложения с помощью функции add на консоль.
Если MODE имеет любое другое значение, выведите на консоль «Неизвестный режим. Завершение работы».
Обратите внимание: функция add должна быть определена только, если MODE имеет значение 1.*/


#include <iostream>
#define MODE 1; //"Работаю в боевом режиме"
using namespace std;

class Calc
{
public:
    int add_result(int a, int b)
    {
        result = a + b;
        return result;
    }
    void set_num1(int a)
    {
        this->a = a;
    }
    void set_num2(int b)
    {
        this->b = b;
    }
private:
    int a = 0;
    int b = 0;
    int result = 0;
};

int main()
{
    setlocale(LC_ALL, "Ru");
#if MODE == 1
    cout << "Работаю в боевом режиме" << endl;

    Calc calc;
    int num_1 = 0;
    int num_2 = 0;

    cout << "Введите число 1: ";
    cin >> num_1;
    calc.set_num1(num_1);
    cout << "Введите число 2: ";
    cin >> num_2;
    calc.set_num1(num_2);
    cout << "Результат сложения: " << calc.add_result(num_1, num_2);
#elif MODE == 0
    cout << "Работаю в режиме тренировки" << endl;
#else MODE
    cout << "Неизвестный режим. Завершение работы" << endl;
#endif
    return 0;
}

