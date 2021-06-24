//#include "Func.h"
//
//#include <iomanip>
//#include <sstream>
//#include <iostream>
//
//using namespace std;
//
//void task1() {
//	string condition = "Написать программу, которая заменяет все четные числа в целочисленном статическом массиве на 0. (массив из 10 элементов)";
//	func::PrintCondition(condition);
//	int* MAX_VAL = new int(10);
//	int* arr = new int[*MAX_VAL];
//
//	func::Randomize(arr, *MAX_VAL);
//
//	cout << "Изначальный массив: \n";
//	for (int i = 0; i < *MAX_VAL; i++) {
//		cout << "{" << i + 1 << " : " << setw(3) << arr[i] << "}\t";
//		arr[i] = arr[i] % 2 ? arr[i] : 0;
//	}
//
//	cout << "\n\nНовый  массив: \n";
//	for (int i = 0; i < *MAX_VAL; i++)
//		cout << "{" << i + 1 << " : " << setw(3) << arr[i] << "}\t";
//
//	delete arr;
//	delete MAX_VAL;
//}
//
//void task2() {
//	string condition = "Ввод символа с клавиатуры (с проверкой что это именно символ), ввод строки с клавиатуры (с проверкой что это именно строка). Вывод в консоль номера, который символ занимает в строке, если он там есть. Если нет — вывод сообщения об отсутствии символа.";
//	func::PrintCondition(condition);
//	cout << "Введите символ: ";
//	char simbol;
//	while (true) {
//		cin >> simbol;
//		if (isdigit(simbol)) {
//			cout << "Введена цифра, повторите ввод: ";
//			cin.ignore(10000, '\n');
//		}
//		else {
//			break;
//		}
//	}
//
//	cin.ignore(10000, '\n');
//	string str;
//	cout << "Введите строку для поиска (больше 3 символов и не только цифры): ";
//	while (true)
//	{
//		cin >> str;
//		if (str.length() < 3 || func::IsNumericStr(str)) {
//			cout << "Ограничение не пройдено. Повторите ввод: ";
//			cin.ignore(10000, '\n');
//		}
//		else {
//			break;
//		}
//	}
//
//	cout << "\n";
//	int pos = str.find(simbol);
//	if (pos > str.length()) {
//		cout << "Такого символа нет в строке";
//	}
//	else {
//		cout << "Позиция введенного символа : " << pos + 1;
//	}
//}
//
//void task3() {
//	string condition = "Расчет определителя матрицы, матрица размером 3 на 3 (любая размерность). Ввод чисел построчно. Числа только целые.";
//	func::PrintCondition(condition);
//
//	int m, i, j, d;
//	cout << "Введите размерность квадратной матрицы (больше 0 и меньше " << (int)INT8_MAX << "): ";
//	m = func::InputHub(0, INT8_MAX);
//
//	int** arr = new int* [m];
//	for (i = 0; i < m; i++) {
//		arr[i] = new int[m];
//		for (j = 0; j < m; j++) {
//			cout << "arr[" << i << "][" << j << "]= ";
//			func::ValidateInput(arr[i][j]);
//		}
//	}
//
//	cout << "\n\n";
//
//	d = func::GetDeterminant(arr, m);
//	cout << "Определитель матрицы равен " << d;
//
//	delete arr;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	cout << "Введите номер задачи (от 1 до 3): ";
//	int labNum = func::InputHub(1, 3);
//
//	switch (labNum) {
//	case 1: task1(); break;
//	case 2: task2(); break;
//	case 3: task3(); break;
//	}
//
//	cout << "\n\n[END]\n";
//}