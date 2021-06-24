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
//void task1() {
//	string condition = "Среднее гармоническое значение двух чисел получается путем инвертирования этих чисел, вычисления среднего значения инверсий и получения инверсии результата. Напишите функцию, которая принимает два аргумента double и возвращает среднее гармоническое значение этих двух чисел";
//	func::PrintCondition(condition);
//
//	const int COUNT = 2;
//
//	auto lambdaFunc_garm = [COUNT](double arr[]) -> double {
//		double sum = 0;
//		for (int i = 0; i < COUNT; i++)
//			sum += 1 / arr[i];
//		return COUNT / sum;
//	};
//
//	double arr[COUNT];
//	std::cout << "Введите " << COUNT << " double чисел: \n";
//	for (int i = 0; i < COUNT; i++) {
//		std::cout << "Введите " << i + 1 << " число: ";
//		func::ValidateInput(arr[i]);
//	}
//
//	try {
//		std::cout << "\nОтвет: " << lambdaFunc_garm(arr) << "\n";
//	}
//	catch(exception ex){
//		cout << "Произошла ошибка: " << ex.what();
//	}
//	
//}
//
//void task2() {
//	string condition = "Напишите и протестируйте функцию, которая принимает в качестве аргументов адреса трех переменных double и помещает наименьшее значение в первую переменную, среднее значение — во вторую, а наибольшее значение — в третью.";
//	func::PrintCondition(condition);
//	const int COUNT = 3;
//
//	auto lambdaFunc_larger_of = [COUNT](vector<double> &arr) {
//		sort(arr.begin(), arr.end());
//	};
//
//	vector<double> arr;
//	std::cout << "Введите " << COUNT << " double числа: \n";
//	for (int i = 0; i < COUNT; i++) {
//		std::cout << "Введите " << i + 1 << " число: ";
//		double val;
//		func::ValidateInput(val);
//		arr.push_back(val);
//	}
//
//	lambdaFunc_larger_of(arr);
//
//	std::cout << "\nОтвет: \n";
//	for (int i = 0; i < COUNT; i++)
//		std::cout << setw(5) << arr[i] << "\t";
//	std::cout << "\n";
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(0));
//
//	cout << "Введите номер задачи (от 1 до 2): ";
//	int labNum = func::InputHub(1, 2);
//
//	switch (labNum) {
//		case 1: task1(); break;
//		case 2: task2(); break;
//	}
//
//	cout << "\n\n[END]\n";
//}