/*
Лабораторная работа N1 (2 семестр)
Вариант: 14
Выполнил: Ахатов И.Р.
Группа: ИТ-11(1)
Задача: Дан вектор из N вещественных чисел.
Найти элементы с минимальным и максимальным значениями;
отсортировать часть вектора, состоящего из находящихся между ними элементов.
Разрешается использовать только один вектор.
Решить задачу для двух типов массивов - int и double.
Использовать в решении перегрузку и/или шаблоны функции.
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

#pragma region Functions
// Вывод vector<int> на консоль
void print(std::vector<int> a)
{
	for (auto it = a.begin(); it != a.end(); it++)
		std::cout << std::setw(6) << *it;
	std::cout << std::endl;
}
// Вывод vector<double> на консоль : перегрузка
void print(std::vector<double> a)
{
	std::cout << std::fixed;
	for (auto it = a.begin(); it != a.end(); it++)
		std::cout << std::setw(6) << std::setprecision(1) << *it;
	std::cout << std::endl;
}
// Заполнение вектора vector<int> случайными числами
void createRandomVector(std::vector<int>& a, int N)
{
	for (int i = 0; i < N; i++)
		a.push_back(rand() % 100);
}
// Заполнение вектора vector<double> случайными числами : перегрузка
void createRandomVector(std::vector<double>& a, int N)
{
	for (int i = 0; i < N; i++)
		a.push_back(double(rand()) / RAND_MAX * 100.0);
}

template <typename T>
void max_and_min(std::vector<T>& a)
{
	// Ищем минимальный и максимальный элементы
	auto min_max = std::minmax_element(a.begin(), a.end());
	T min_index = min_max.first - a.begin();
	T max_index = min_max.second - a.begin();

	// Определяем начальный и конечный индексы для сортировки
	T start_index = min_index < max_index ? min_index + 1 : max_index + 1;
	T end_index = min_index < max_index ? max_index : min_index;

	// Сортируем часть вектора между минимальным и максимальным элементами
	sort(a.begin() + start_index, a.begin() + end_index);
}
#pragma endregion

int main5()
{
	int N;
	srand(time(NULL));

	std::cout << "Введите исходный размер вектора: ";
	std::cin >> N;
	std::cout << std::endl;

	std::vector<int> a;
	createRandomVector(a, N);
	std::cout << "Исходный vector<int>:" << std::endl;
	print(a);
	max_and_min<int>(a);
	std::cout << "Полученный vector<int>:" << std::endl;
	print(a);


	std::vector<double> b;
	createRandomVector(b, N);
	std::cout << "Исходный vector<double>:" << std::endl;
	print(b);
	max_and_min<double>(b);
	std::cout << "Полученный vector<double>:" << std::endl;
	print(b);

	return 0;
}