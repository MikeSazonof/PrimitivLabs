//#include <iostream>
//#include "Func.h"
//
//using namespace std;
//
//void task1() {
//	string condition = "��������� ���������, ������� ����� ��������� �������� ����������� �����. ����� ����, ������ ����� ����� ����� ���������� ������� � ����� ������.";
//	func::PrintCondition(condition);
//
//	int number;
//	cout << "������� ����� �� " << 1e4 << " �� " << 1e5 - 1 << "\n";
//	number = func::InputHub(1e4, 1e5 - 1);
//
//	string newVal = std::to_string(number);
//	for (int i = 0; i < newVal.size(); i++)
//		cout << i + 1 << " ������ ��� : " << newVal[i] << "\n";
//}
//
//void task2() {
//	string condition = "�������� ���������, ������� ��������� ������������ ������ � ������� ��������� ����� ������� ��������, ��������� � � ������� ������� � ��������� ������� � �������.";
//	func::PrintCondition(condition);
//	
//	try {
//		cout << "������� ��������� �����: ";
//		char letter;
//		while (true) {
//			cin >> letter;
//
//			if (!isalpha(letter)) {
//				cout << "������� �� ��������� ����� \n";
//				cout << "��������� �������: ";
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
//		cout << "\n���������: " << letter;
//	}
//	catch (exception ex){
//		cout << "��������� ������: " << ex.what();
//	}
//}
//
//void task3() {
//	string condition = "�������� �������, �������������� ������� �������������� ������ �������. �������������� ������� �, ��� �������������, ��������������� ����������.";
//	func::PrintCondition(condition);
//
//	cout << "�������� ����� ������������� ��������\n";
//	cout << "������� ���������� ��������� �������, �� �� ������ ��� " << (int)INT8_MAX << " � �� ������ ��� 1 : ";
//	int count = func::InputHub(1, INT8_MAX);
//
//	int* arr = new int[count];
//	func::Randomize(arr, count);
//
//	cout << "\n\n�������� �������:\n";
//	for (short i = 0; i < count; i++)
//		cout << arr[i] << "\t";
//	cout << "\n";
//
//	int32_t summ = 0;
//	for (short i = 0; i < count; i++)
//		summ += arr[i];
//
//	cout << "\n������� �������� : " << summ / (float)count;
//	delete arr;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	cout << "������� ����� ������ (�� 1 �� 3): ";
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