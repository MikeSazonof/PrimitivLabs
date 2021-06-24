#pragma once

#include <sstream>
#include <iostream>
#include <vector>

using namespace std;
namespace func {
	/// <summary>
	/// Generic метод для ввода не чисел и параллельной обработки невалидных значений
	/// </summary>
	/// <typeparam name="T">Тип необходимых данных</typeparam>
	/// <param name="input">Выходящая результирующая переменная</param>
	template<typename T>
	void ValidateInput(T& input) {
		do {
			cin >> input;
			if (cin.fail()) {
				cout << "Введено некорректное значение. Повторите ввод:  ";
				cin.clear();
				cin.ignore(10000, '\n');
				continue;
			}

			cin.clear();
			cin.ignore(10000, '\n');
			return;
		} while (true);
	}

	/// <summary>
	/// TryParse но от мира говна
	/// </summary>
	/// <typeparam name="T">Либо int, либо float</typeparam>
	/// <param name="newVar">Переменная для ввода данных</param>
	/// <param name="inputData">Вводимая строка</param>
	/// <returns>Успешность парсинга. True - спарсился int, False - спарсился float, Exception - введена строка</returns>
	template<typename T>
	bool TryParse_trash(T& newVar, string& inputData) {
		std::stringstream stream(inputData);
		char test;

		if ((!(stream >> newVar)) || (stream >> test)) {
			if (typeid(newVar) != typeid(float)) {
				float test;
				if (TryParse_trash(test, inputData)) {
					return false;
				}
			}
			
			throw exception("Введена строка. Выхожу из меню");
		}

		return true;
	}

	/// <summary>
	/// Проверка на число для строки
	/// </summary>
	/// <param name="test">Строка для проверки</param>
	/// <returns>True - если строка число, False - если нет</returns>
	bool IsNumericStr(string test);

	/// <summary>
	/// Метод для получения случайного значения в диапазоне
	/// </summary>
	/// <param name="lowBar">Нижняя  граница</param>
	/// <param name="topBar">Верхняя граница</param>
	/// <returns></returns>
	int Randomize(int lowBar, int topBar);

	/// <summary>
	/// Метод для установки в массив случайных значений. Граница - от 1 до INT8_MAX 
	/// </summary>
	/// <param name="arr">Динамический массив</param>
	/// <param name="length">Количнство элементов</param>
	void Randomize(int* arr, int length);

	/// <summary>
	/// Метод аналог Replace
	/// </summary>
	/// <param name="str">Строка в которой нужна замена</param>
	/// <param name="from">Подстрока для замены</param>
	/// <param name="to">Подстрока для того, на что заменить</param>
	void replaceText(string& str, const string& from, const string& to);

	/// <summary>
	/// Метод валидации числа-выбора в выбранных границах
	/// </summary>
	/// <param name="lowBar">Нижняя граница</param>
	/// <param name="highBar">Верхняя граница</param>
	/// <returns>Число-выбор</returns>
	int32_t InputHub(int32_t lowBar, int32_t highBar);

	/// <summary>
	/// Метод для форматированной печати условия задачи
	/// </summary>
	/// <param name="condition">Условие задачи</param>
	void PrintCondition(string condition);

	/// <summary>
	/// Метод аналог Split
	/// </summary>
	/// <param name="s">Строка</param>
	/// <param name="delimiter">Разделитель</param>
	/// <returns>Массив строк</returns>
	vector<string> Split(const string& s, char delimiter);

	/// <summary>
	/// Метод аналог Trim
	/// </summary>
	/// <param name="s">Строка</param>
	/// <returns>Очищенная строка</returns>
	string Trim(string& s);

	/// <summary>
	/// Метод для получения детерминанта
	/// </summary>
	/// <param name="mas">Динамический двумерный массив / сама квадратная матрица</param>
	/// <param name="m">Количество элементов</param>
	/// <returns>Детерминант</returns>
	int GetDeterminant(int** mas, int m);

	string encoding(string& message);

	string decoding(string& message);
}