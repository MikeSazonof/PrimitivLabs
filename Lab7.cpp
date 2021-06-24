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
//	string condition = "������� ������������� �������� ���� ����� ���������� ����� �������������� ���� �����, ���������� �������� �������� �������� � ��������� �������� ����������. �������� �������, ������� ��������� ��� ��������� double � ���������� ������� ������������� �������� ���� ���� �����";
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
//	std::cout << "������� " << COUNT << " double �����: \n";
//	for (int i = 0; i < COUNT; i++) {
//		std::cout << "������� " << i + 1 << " �����: ";
//		func::ValidateInput(arr[i]);
//	}
//
//	try {
//		std::cout << "\n�����: " << lambdaFunc_garm(arr) << "\n";
//	}
//	catch(exception ex){
//		cout << "��������� ������: " << ex.what();
//	}
//	
//}
//
//void task2() {
//	string condition = "�������� � ������������� �������, ������� ��������� � �������� ���������� ������ ���� ���������� double � �������� ���������� �������� � ������ ����������, ������� �������� � �� ������, � ���������� �������� � � ������.";
//	func::PrintCondition(condition);
//	const int COUNT = 3;
//
//	auto lambdaFunc_larger_of = [COUNT](vector<double> &arr) {
//		sort(arr.begin(), arr.end());
//	};
//
//	vector<double> arr;
//	std::cout << "������� " << COUNT << " double �����: \n";
//	for (int i = 0; i < COUNT; i++) {
//		std::cout << "������� " << i + 1 << " �����: ";
//		double val;
//		func::ValidateInput(val);
//		arr.push_back(val);
//	}
//
//	lambdaFunc_larger_of(arr);
//
//	std::cout << "\n�����: \n";
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
//	cout << "������� ����� ������ (�� 1 �� 2): ";
//	int labNum = func::InputHub(1, 2);
//
//	switch (labNum) {
//		case 1: task1(); break;
//		case 2: task2(); break;
//	}
//
//	cout << "\n\n[END]\n";
//}