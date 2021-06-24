//#include <iostream>
//#include "Func.h"
//
//#include <iomanip>
//#include <sstream>
//#include <time.h>
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
//void task1() {
//	string condition = "Создайте функцию, которая организует простейшей сжатие входящей символьной строки произвольного масштаба. Сжатие происходит по следующему принципу: если в строке есть последовательность повторяющихся символов, то она заменяется на пару код символа и количество его повтора в строчке. Обеспечьте возможность ввода строки с клавиатуры.";
//	func::PrintCondition(condition);
//
//	cout << "Введите изначальную строку (размер больше 3 и не должно присутствовать символа '#'):";
//	string message;
//	while (true) {
//		cin >> message;
//		if (message.length() < 3 || message.find('#') < message.length()) {
//			cout << "Ограничение не пройдено. Повторите ввод: ";
//			cin.ignore(10000, '\n');
//		}
//		else {
//			break;
//		}
//	}
//
//	message = func::encoding(message);
//	func::decoding(message);
//}
//
//void task2() {
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
//void task3() {
//	string condition = "Создайте программу, позволяющую находить в строке подстроку и заменять её на другую произвольную подстроку в каждом месте обнаружения.";
//	func::PrintCondition(condition);
//
//	string str;
//	cout << "Введите строку для поиска (больше 3 символов и без пробелов): ";
//	while (true)
//	{
//		cin >> str;
//		if (str.length() < 3) {
//			cout << "Ограничение не пройдено. Повторите ввод: ";
//			cin.ignore(10000, '\n');
//		}
//		else {
//			break;
//		}
//	}
//
//	string replaceText;
//	cout << "Введите строку которую необходимо заменить(не больше изначальной строки): ";
//	while (true)
//	{
//		cin >> replaceText;
//		if (str.length() < replaceText.length()) {
//			cout << "Ограничение не пройдено. Повторите ввод: ";
//			cin.ignore(10000, '\n');
//		}
//		else {
//			break;
//		}
//	}
//
//	string newText;
//	cout << "Введите строку на которую необходимо заменить: ";
//	cin >> newText;
//
//	cout << "\nСтарая строка: " << str << "\n";
//	func::replaceText(str, replaceText, newText);
//	cout << "Новая строка:  " << str;
//}
//
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