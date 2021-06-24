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
//	cout << "����: \n";
//	cout << "���� ����������: \n";
//	cout << "������ ������: " << lowBar << "\n";
//	cout << "������� ������: " << highBar << "\n";
//	cout << "������� ��������: " << inputVal << "\n";
//	cout << "\n\n\n";
//
//	cout << "������� 1 ��� ����� �������� �������\n";
//	cout << "������� 2 ��� ����� ������� �������\n";
//	cout << "������� 3 ��� ��������� ���������� �����\n";
//	cout << "������� 4 ��� ������\n";
//
//	string inputChoise;
//	int choise;
//	cout << "��� ����: ";
//	cin >> inputChoise;
//	try {
//		if (func::TryParse_trash(choise, inputChoise)) {
//			switch (choise) {
//				case 1: {
//					cout << "������� ������� ������� (�� ����������� (" << lowBar + 2 << ") �� " << INT8_MAX - 2 << "): ";
//					highBar = func::InputHub(lowBar + 2, (int)INT8_MAX - 1);
//					break;
//				}
//				case 2: {
//					cout << "������� ������ ������� (�� ����������� (" << 0 << ") �� " << highBar << "): ";
//					highBar = func::InputHub(1, highBar - 2);
//					break;
//				}
//				case 3: {
//					cout << "������� ������� ����� (�� ������������ (" << lowBar + 1 << ") �� " << highBar - 1 << "): ";
//					inputVal = func::InputHub(lowBar + 1, highBar - 1);
//					break;
//				}
//				case 4: {
//					throw exception("��� ������ ������� 4. ��������� ����� �� ����.");
//				}
//			}
//		}
//		else {
//			throw exception("������� ������� ��������. ��������� ����� �� ����.");
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
//		cout << "������� ������� ��������: ";
//		cin >> InputStringVal;
//		if (func::TryParse_trash(inputVal, InputStringVal)) {
//			inputVal = inputVal;
//			if ((inputVal < lowBar || inputVal > highBar))
//				cout << "�������� ����� �� �������";
//		}
//		else {
//			throw exception("������� ������� ��������. ��������� ����� �� ����.");
//		}
//	}
//	
//	while (true)
//		Hub(lowBar, highBar, inputVal);
//}
//
//void task1() {
//	string condition = "�������� �������, ������� ���������� ���������� �� ���� ������������� ����������.";
//	func::PrintCondition(condition);
//	
//	const int ITERATION_COUNT = 3;
//	int arr[ITERATION_COUNT];
//	for (int i = 0; i < ITERATION_COUNT; i++) {
//		cout << "������� " << i + 1 << " ����� (������ 0 � ������ " << (int)INT8_MAX << "): ";
//		arr[i] = func::InputHub(0, (int)INT8_MAX);
//	}
//
//	//�������
//	auto lambdaFunc_max = [](int arr[]) -> int{
//		return max(arr[0], max(arr[1], arr[2]));
//	};
//
//	cout << "\n������������ ����� " << ITERATION_COUNT << " ����� = " << *max_element(arr, arr + ITERATION_COUNT) << "\n";
//}
//
//void task2() {
//	string condition = "�������� �������, ������� ����� ��� ��������� int: ������ ������ � ������� ������. ������� ������ ������ ����� ����� �� ������� ������. ���� ��� ����� ������� �� ��������� �������, ������� ������ ����� ������� ���� (��������� ������� �� ����� �)), ����� �������� ���������� ������������ 		������ ����� ��������.���� ��������� ����� �������� �������� � ����� ��������, ������� ������ ���������� ��� � ���������� �������.���� ���������������� �������� ������ ��������� � ����������� �������� ��������, ���������������� ������ �� ���������  		(����� �.�������� �������, ������� ������� �� ����� ���� �� ������� ��������������� ��������� � ���������� ������� ���� �� ���.���� �������� � ������� �������, ����������� �������� �������� ����� ����� ��������� ������ � ���������� � ����� �� ���� � ���������)";
//	func::PrintCondition(condition);
//
//	int highBar = -1, lowBar = -1;
//
//	while (lowBar < 1 || lowBar > (int)INT8_MAX - 2) {
//		cout << "������� ������ ������� (�� ����������� (" << 1 << ") �� " << INT8_MAX - 2 << ") : ";
//		lowBar = func::InputHub(1, INT8_MAX - 2);
//	}
//
//	while (highBar < lowBar || highBar > INT8_MAX - 1) {
//		cout << "������� ������� ������� (�� ����������� (" << lowBar + 2 << ") �� " << (int)INT8_MAX - 1 << ") : ";
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
//	string condition = "���������� ���������� ������� ���������. (������ �� ����� �����).";
//	func::PrintCondition(condition);
//
//	cout << "���� �������� ���������\n";
//	cout << "������� ���������� ��������� ������� (������� - 3, �������� - " << (int)INT8_MAX << "): ";
//	int count = func::InputHub(3, INT8_MAX);
//
//	int* arr = new int[count];
//	func::Randomize(arr, count);
//
//	cout << "\n\n������ ������: \n";
//	for (int i = 0; i < count; i++)
//		cout << setw(3) << arr[i] << " ";
//
//	InsertSort(arr, count);
//
//	cout << "\n\n����� ������: \n";
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
//	cout << "������� ����� ������ (�� 1 �� 3): ";
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