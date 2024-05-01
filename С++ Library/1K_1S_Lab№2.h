/*
Лабораторная работа №2
Вариант: 14
Выполнил: Ахатов И.Р.
Группа: ИТ-11(1)
Задача: Даны четыре целых числа, одно из них не равно трём другим, 
равным между собой. Указать порядковый номер числа, отличного от остальных.
*/

#include <iostream>

void print_variable(int a, int b, int c, int d)
{
    // Проверка на равенство чисел
    if (a == b && b == c) {
        std::cout << "Четвертое число " << d << " отлично от остальных." << std::endl;
    }
    else if (a == b && b == d) {
        std::cout << "Третье число " << c << " отлично от остальных." << std::endl;
    }
    else if (a == c && c == d) {
        std::cout << "Второе число " << b << " отлично от остальных." << std::endl;
    }
    else {
        std::cout << "Первое число " << a << " отлично от остальных." << std::endl;
    }
}

int lab2()
{
    int a, b, c, d;
    // Ввод значения переменной а
    std::cout << "Ввод: " << std::endl;
    std::cout << "Введите значение переменной a: ";
    while (!(std::cin >> a) || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите только целое число для переменной a: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    // Ввод значения переменной b
    std::cout << "Введите значение переменной b: ";
    while (!(std::cin >> b) || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите только целое число для переменной b: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    // Ввод значения переменной с
    std::cout << "Введите значение переменной c: ";
    while (!(std::cin >> c) || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите только целое число для переменной c: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    // Ввод значения переменной d
    std::cout << "Введите значение переменной d: ";
    while (!(std::cin >> d) || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите только целое число для переменной c: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    
    std::cout << std::endl;
    //
    print_variable(a, b, c, d);
    
    return 0;
}
