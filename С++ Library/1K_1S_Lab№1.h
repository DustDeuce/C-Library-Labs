/*
Лабораторная работа №1
Вариант: 14
Выполнил: Ахатов И.Р.
Группа: ИТ-11(1)
Задача: Даны значения трёх цклочисленных переменных a, b, c. 
Переместить их значения так, чтобы переменная а получила бы исходное значение b, 
b получила бы хначения c, а переменная c - значение а.
*/

#include <iostream>

void print_variable(int a, int b, int c)
{
    // Перемещение значений переменных
    int tmp = a;
    a = b;
    b = c;
    c = tmp;

    // Вывод измененных значений переменных
    std::cout << "Вывод: " << std::endl;
    std::cout << "Переменная a = " << a << std::endl;
    std::cout << "Переменная b = " << b << std::endl;
    std::cout << "Переменная c = " << c << std::endl;
}

int lab1()
{   
    int a, b, c;
    
    std::cout << "Лабораторная работа №1. Вариант: №14" << std::endl;
    std::cout << std::endl;
    // Ввод значений переменных
    std::cout << "Ввод: " << std::endl;
    std::cout << "Введите значение переменной a: ";
    while (!(std::cin >> a) || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите только целое число для переменной a: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    std::cout << "Введите значение переменной b: ";
    while (!(std::cin >> b) || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите только целое число для переменной b: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    std::cout << "Введите значение переменной c: ";
    while (!(std::cin >> c) || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите только целое число для переменной c: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    
    std::cout << std::endl;
    
    print_variable(a, b, c);
    
    return 0;
}