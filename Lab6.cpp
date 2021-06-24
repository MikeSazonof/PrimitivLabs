//#include <iostream>
//#include "Func.h"
//
//#include <iomanip>
//#include <sstream>
//#include <time.h>
//#include <algorithm>
//#include <initializer_list>
//
//using namespace std;
//
//void InsertSort(int* arr, int count) {
//	for (int i = 1; i < count; i++) {
//		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
//			int tmp = arr[j - 1];
//			arr[j - 1] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//}
//
//void Hub(int& lowBar, int& highBar, int& inputVal) {
//	system("CLS");
//	cout << "Меню: \n";
//	cout << "Ваши переменные: \n";
//	cout << "Нижний предел: " << lowBar << "\n";
//	cout << "Верхний предел: " << highBar << "\n";
//	cout << "Целевое значение: " << inputVal << "\n";
//	cout << "\n\n\n";
//
//	cout << "Введите 1 для ввода верхнего предела\n";
//	cout << "Введите 2 для ввода нижнего предела\n";
//	cout << "Введите 3 для изменения введенного числа\n";
//	cout << "Введите 4 для выхода\n";
//
//	string inputChoise;
//	int choise;
//	cout << "Ваш ввод: ";
//	cin >> inputChoise;
//	try {
//		if (func::TryParse_trash(choise, inputChoise)) {
//			switch (choise) {
//				case 1: {
//					cout << "Введите верхнюю границу (от минимальной (" << lowBar + 2 << ") до " << INT8_MAX - 2 << "): ";
//					highBar = func::InputHub(lowBar + 2, (int)INT8_MAX - 1);
//					break;
//				}
//				case 2: {
//					cout << "Введите нижнюю границу (от минимальной (" << 0 << ") до " << highBar << "): ";
//					highBar = func::InputHub(1, highBar - 2);
//					break;
//				}
//				case 3: {
//					cout << "Введите целевое число (от минимального (" << lowBar + 1 << ") до " << highBar - 1 << "): ";
//					inputVal = func::InputHub(lowBar + 1, highBar - 1);
//					break;
//				}
//				case 4: {
//					throw exception("Был выбран вариант 4. Произвожу выход из меню.");
//				}
//			}
//		}
//		else {
//			throw exception("Введено дробное значение. Произвожу выход из меню.");
//		}
//
//		return;
//	}
//	catch (exception ex) {
//		throw ex;
//	}
//}
//
//int PseudoHub(int& lowBar, int& highBar) {
//	string InputStringVal;
//	int inputVal = 0;
//	while (inputVal < lowBar || inputVal > highBar) {
//		cout << "Введите целевое значение: ";
//		cin >> InputStringVal;
//		if (func::TryParse_trash(inputVal, InputStringVal)) {
//			inputVal = inputVal;
//			if ((inputVal < lowBar || inputVal > highBar))
//				cout << "Значение вышло за границы";
//		}
//		else {
//			throw exception("Введено дробное значение. Произвожу выход из меню.");
//		}
//	}
//	
//	while (true)
//		Hub(lowBar, highBar, inputVal);
//}
//
//void task1() {
//	string condition = "Напишите функцию, которая возвращает наибольший из трех целочисленных аргументов.";
//	func::PrintCondition(condition);
//	
//	const int ITERATION_COUNT = 3;
//	int arr[ITERATION_COUNT];
//	for (int i = 0; i < ITERATION_COUNT; i++) {
//		cout << "Введите " << i + 1 << " число (больше 0 и меньше " << (int)INT8_MAX << "): ";
//		arr[i] = func::InputHub(0, (int)INT8_MAX);
//	}
//
//	//функция
//	auto lambdaFunc_max = [](int arr[]) -> int{
//		return max(arr[0], max(arr[1], arr[2]));
//	};
//
//	cout << "\nМаксимальное среди " << ITERATION_COUNT << " чисел = " << *max_element(arr, arr + ITERATION_COUNT) << "\n";
//}
//
//void task2() {
//	string condition = "Напишите функцию, которая имеет два аргумента int: нижний предел и верхний предел. Функция должна читать целое число из входных данных. Если это число выходит за указанные пределы, функция должна снова вывести меню (используя функцию из части а)), чтобы повторно предложить пользователю 		ввести новое значение.Если введенное целое значение попадает в рамки пределов, функция должна возвратить его в вызывающую функцию.Ввод нецелочисленного значения должен приводить к возвращению функцией значения, соответствующего выходу из программы  		(часть а.Напишите функцию, которая выводит на экран меню из четырех пронумерованных вариантов и предлагает выбрать один из них.Ввод верхнего и нижнего предела, возможность изменить входящее целое число повторным вводом с клавиатуры и выход из меню и программы)";
//	func::PrintCondition(condition);
//
//	int highBar = -1, lowBar = -1;
//
//	while (lowBar < 1 || lowBar > (int)INT8_MAX - 2) {
//		cout << "Введите нижнюю границу (от минимальной (" << 1 << ") до " << INT8_MAX - 2 << ") : ";
//		lowBar = func::InputHub(1, INT8_MAX - 2);
//	}
//
//	while (highBar < lowBar || highBar > INT8_MAX - 1) {
//		cout << "Введите верхнюю границу (от минимальной (" << lowBar + 2 << ") до " << (int)INT8_MAX - 1 << ") : ";
//		highBar = func::InputHub(lowBar+2, (int)INT8_MAX - 1);
//	}
//	
//	try {
//		PseudoHub(lowBar, highBar);
//	}
//	catch (exception ex) {
//		cout << "\n" << ex.what();
//	}
//}
//
//void task3() {
//	string condition = "Реализуйте сортировку массива вставками. (массив из целых чисел).";
//	func::PrintCondition(condition);
//
//	cout << "Ввод значений случайный\n";
//	cout << "Введите количество элементов массива (минимум - 3, максимум - " << (int)INT8_MAX << "): ";
//	int count = func::InputHub(3, INT8_MAX);
//
//	int* arr = new int[count];
//	func::Randomize(arr, count);
//
//	cout << "\n\nСтарый массив: \n";
//	for (int i = 0; i < count; i++)
//		cout << setw(3) << arr[i] << " ";
//
//	InsertSort(arr, count);
//
//	cout << "\n\nНовый массив: \n";
//	for (int i = 0; i < count; i++)
//		cout << setw(3) << arr[i] << " ";
//
//	delete arr;
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(0));
//
//	cout << "Введите номер задачи (от 1 до 3): ";
//	int labNum = func::InputHub(1, 3);
//
//	switch (labNum) {
//		case 1: task1(); break;
//		case 2: task2(); break;
//		case 3: task3(); break;
//	}
//
//	cout << "\n\n[END]\n";
//}