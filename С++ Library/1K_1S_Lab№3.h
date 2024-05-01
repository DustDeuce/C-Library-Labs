/*
Лабораторная работа №3
Вариант: 14
Выполнил: Ахатов И.Р.
Группа: ИТ-11(1)
Задача: Дано натуральное число n. Среди натуральных чисел от 1 до n 
найти число с наибольшим количеством делителей.
*/

#include <iostream>

int countDivisors(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }
    return count;
}

int main3() {
    int n;

    // Ввод значения n
    std::cout << "Введите натуральное число n: ";
    while (!(std::cin >> n) || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите только целое число для переменной c: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    int maxDivisors = 0;
    int numberWithMaxDivisors = 1;

    // Поиск числа с наибольшим количеством делителей
    for (int i = 1; i <= n; i++) {
        int divisors = countDivisors(i);
        if (divisors > maxDivisors) {
            maxDivisors = divisors;
            numberWithMaxDivisors = i;
        }
    }

    // Вывод результата
    std::cout << "Число с наибольшим количеством делителей: " << numberWithMaxDivisors << std::endl;

    return 0;
}