#pragma region 1K_1S_Labs
#include "1K_1S_Lab№1.h"
#include "1K_1S_Lab№2.h"
#include "1K_1S_Lab№3.h"
#include "1K_1S_Lab№4.h"
#include "1K_1S_Lab№5.h"
#include "1K_1S_Lab№6.h"
#pragma endregion Библиотека лабораторных за 1 курс, 1 семестр
#pragma region 1K_2S_Labs
#include "1K_2S_Lab№1.h"
#pragma endregion Библиотека лабораторных за 1 курс, 2 семестр


int main(int x)
{
	
	std::cout << "Моя библиотека лабораторных работ по ППП" << std::endl;
	std::cout << std::endl;

	std::cout << "ИТ-11 Первый курс:" << std::endl;
	std::cout << std::endl;

	std::cout << "1) Первый семестр" << std::endl;
	std::cout << "2) Второй семестр" << std::endl;
	std::cout << std::endl;

	std::cout << "0) Выход из программы" << std::endl;
	std::cout << std::endl;

	std::cout << "Выберите семестр: "; std::cin >> x;

	// Очистка терминала при выборе цифр 1 и 2
	if (x == 1 or x == 2)
	{
		system("cls");
	}

	// Выбор учебного сесестра
	switch (x)
	{
		// При выборе цифры 1, открываются лабы за 1 семестр
		case 1:
			std::cout << "Лабы за первый семестр:" << std::endl;
			std::cout << std::endl;

			std::cout << " 1) L№1 Перемещение значений переменных между собой" << std::endl;
			std::cout << " 2) L№2 Поиск числа отличающегося от остальных" << std::endl;
			std::cout << " 3) L№3 Поиск числа с наибольшим количеством делителей" << std::endl;
			std::cout << " 4) L№4 Проверка введённого пользователем числа на палиндром" << std::endl;
			std::cout << " 5) L№5 " << std::endl;
			std::cout << " 6) L№6 " << std::endl;
			std::cout << " 7) L№7 " << std::endl;
			std::cout << " 8) L№8 " << std::endl;
			std::cout << " 9) L№9 " << std::endl;
			std::cout << "10) L№10 " << std::endl;
			std::cout << "11) L№11 " << std::endl;
			std::cout << std::endl;
			
			std::cout << "0) Назад" << std::endl;
			std::cout << std::endl;

			std::cout << "Выберите нужное задание: "; std::cin >> x;
			std::cout << std::endl;
			// Выбор нужных лабораторных работ
			switch (x)
			{
				// Лабораторная работа №1 первого семестра
				case 1:
					system("cls");
					int a, b, c;
					lab1();
					break;
				// Лабораторная работа №2 первого семестра
				case 2:
					system("cls");
					lab2();
					break;
				// Лабораторная работа №3 первого семестра
				case 3:
					system("cls");
					main3();
					break;
				// Очистка терминала и выход на главное меню
				case 0:
					system("cls");
					return main(x);
					break;
			}
			break;
		// При выборе цифры 2 открываются лабы за 2 семестр
		case 2:
			std::cout << "Лабы за второй семестр:" << std::endl;
			std::cout << std::endl;

			std::cout << " 1)" << std::endl;
			std::cout << std::endl;
			
			std::cout << "0) Назад" << std::endl;
			std::cout << std::endl;

			std::cout << "Выберите нужное задание: "; std::cin >> x;
			std::cout << std::endl;
			//
			switch (x)
			{
				//
				case 1:
					system("cls");
					main5();
					break;
				case 0:
					system("cls");
					return main(x);
					break;
			}
			break;
		
		case 0:
			return 0;
	}
}