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
//	string condition = "�������� �������, ������� ���������� ���������� ������ �������� ���������� ������ ������������� ��������. ������ ���������� �� ���������� ��������: ���� � ������ ���� ������������������ ������������� ��������, �� ��� ���������� �� ���� ��� ������� � ���������� ��� ������� � �������. ���������� ����������� ����� ������ � ����������.";
//	func::PrintCondition(condition);
//
//	cout << "������� ����������� ������ (������ ������ 3 � �� ������ �������������� ������� '#'):";
//	string message;
//	while (true) {
//		cin >> message;
//		if (message.length() < 3 || message.find('#') < message.length()) {
//			cout << "����������� �� ��������. ��������� ����: ";
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
//void task3() {
//	string condition = "�������� ���������, ����������� �������� � ������ ��������� � �������� � �� ������ ������������ ��������� � ������ ����� �����������.";
//	func::PrintCondition(condition);
//
//	string str;
//	cout << "������� ������ ��� ������ (������ 3 �������� � ��� ��������): ";
//	while (true)
//	{
//		cin >> str;
//		if (str.length() < 3) {
//			cout << "����������� �� ��������. ��������� ����: ";
//			cin.ignore(10000, '\n');
//		}
//		else {
//			break;
//		}
//	}
//
//	string replaceText;
//	cout << "������� ������ ������� ���������� ��������(�� ������ ����������� ������): ";
//	while (true)
//	{
//		cin >> replaceText;
//		if (str.length() < replaceText.length()) {
//			cout << "����������� �� ��������. ��������� ����: ";
//			cin.ignore(10000, '\n');
//		}
//		else {
//			break;
//		}
//	}
//
//	string newText;
//	cout << "������� ������ �� ������� ���������� ��������: ";
//	cin >> newText;
//
//	cout << "\n������ ������: " << str << "\n";
//	func::replaceText(str, replaceText, newText);
//	cout << "����� ������:  " << str;
//}
//
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