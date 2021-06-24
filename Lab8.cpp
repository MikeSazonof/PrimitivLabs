//#include <iostream>
//#include "Func.h"
//
//using namespace std;
//
//void task1() {
//	string condition = "Составить программу, которая будет считывать введённое пятизначное число. После чего, каждую цифру этого числа необходимо вывести в новой строке.";
//	func::PrintCondition(condition);
//
//	int number;
//	cout << "Введите число от " << 1e4 << " до " << 1e5 - 1 << "\n";
//	number = func::InputHub(1e4, 1e5 - 1);
//
//	string newVal = std::to_string(number);
//	for (int i = 0; i < newVal.size(); i++)
//		cout << i + 1 << " символ это : " << newVal[i] << "\n";
//}
//
//void task2() {
//	string condition = "Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра, переводит её в верхний регистр и результат выводит в консоль.";
//	func::PrintCondition(condition);
//	
//	try {
//		cout << "Введите латинскую букву: ";
//		char letter;
//		while (true) {
//			cin >> letter;
//
//			if (!isalpha(letter)) {
//				cout << "Введена не латинская буква \n";
//				cout << "Повторите попытку: ";
//			}
//			else {
//				break;
//			}
//		}
//
//		if (isupper(letter))
//			letter = (char)tolower(letter);
//		else
//			letter = (char)toupper(letter);
//
//		cout << "\nРезультат: " << letter;
//	}
//	catch (exception ex){
//		cout << "Произошла ошибка: " << ex.what();
//	}
//}
//
//void task3() {
//	string condition = "Написать функцию, подсчитывающую среднее арифметическое целого массива. Предварительно объявив и, при необходимости, инициализировав переменные.";
//	func::PrintCondition(condition);
//
//	cout << "Элементы будут сгенерированы случайно\n";
//	cout << "Введите количество элементов массива, но не больше чем " << (int)INT8_MAX << " и не меньше чем 1 : ";
//	int count = func::InputHub(1, INT8_MAX);
//
//	int* arr = new int[count];
//	func::Randomize(arr, count);
//
//	cout << "\n\nЭлементы массива:\n";
//	for (short i = 0; i < count; i++)
//		cout << arr[i] << "\t";
//	cout << "\n";
//
//	int32_t summ = 0;
//	for (short i = 0; i < count; i++)
//		summ += arr[i];
//
//	cout << "\nСреднее значение : " << summ / (float)count;
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