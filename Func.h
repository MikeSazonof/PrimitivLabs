#pragma once

#include <sstream>
#include <iostream>
#include <vector>

using namespace std;
namespace func {
	/// <summary>
	/// Generic ����� ��� ����� �� ����� � ������������ ��������� ���������� ��������
	/// </summary>
	/// <typeparam name="T">��� ����������� ������</typeparam>
	/// <param name="input">��������� �������������� ����������</param>
	template<typename T>
	void ValidateInput(T& input) {
		do {
			cin >> input;
			if (cin.fail()) {
				cout << "������� ������������ ��������. ��������� ����:  ";
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
	/// TryParse �� �� ���� �����
	/// </summary>
	/// <typeparam name="T">���� int, ���� float</typeparam>
	/// <param name="newVar">���������� ��� ����� ������</param>
	/// <param name="inputData">�������� ������</param>
	/// <returns>���������� ��������. True - ��������� int, False - ��������� float, Exception - ������� ������</returns>
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
			
			throw exception("������� ������. ������ �� ����");
		}

		return true;
	}

	/// <summary>
	/// �������� �� ����� ��� ������
	/// </summary>
	/// <param name="test">������ ��� ��������</param>
	/// <returns>True - ���� ������ �����, False - ���� ���</returns>
	bool IsNumericStr(string test);

	/// <summary>
	/// ����� ��� ��������� ���������� �������� � ���������
	/// </summary>
	/// <param name="lowBar">������  �������</param>
	/// <param name="topBar">������� �������</param>
	/// <returns></returns>
	int Randomize(int lowBar, int topBar);

	/// <summary>
	/// ����� ��� ��������� � ������ ��������� ��������. ������� - �� 1 �� INT8_MAX 
	/// </summary>
	/// <param name="arr">������������ ������</param>
	/// <param name="length">���������� ���������</param>
	void Randomize(int* arr, int length);

	/// <summary>
	/// ����� ������ Replace
	/// </summary>
	/// <param name="str">������ � ������� ����� ������</param>
	/// <param name="from">��������� ��� ������</param>
	/// <param name="to">��������� ��� ����, �� ��� ��������</param>
	void replaceText(string& str, const string& from, const string& to);

	/// <summary>
	/// ����� ��������� �����-������ � ��������� ��������
	/// </summary>
	/// <param name="lowBar">������ �������</param>
	/// <param name="highBar">������� �������</param>
	/// <returns>�����-�����</returns>
	int32_t InputHub(int32_t lowBar, int32_t highBar);

	/// <summary>
	/// ����� ��� ��������������� ������ ������� ������
	/// </summary>
	/// <param name="condition">������� ������</param>
	void PrintCondition(string condition);

	/// <summary>
	/// ����� ������ Split
	/// </summary>
	/// <param name="s">������</param>
	/// <param name="delimiter">�����������</param>
	/// <returns>������ �����</returns>
	vector<string> Split(const string& s, char delimiter);

	/// <summary>
	/// ����� ������ Trim
	/// </summary>
	/// <param name="s">������</param>
	/// <returns>��������� ������</returns>
	string Trim(string& s);

	/// <summary>
	/// ����� ��� ��������� ������������
	/// </summary>
	/// <param name="mas">������������ ��������� ������ / ���� ���������� �������</param>
	/// <param name="m">���������� ���������</param>
	/// <returns>�����������</returns>
	int GetDeterminant(int** mas, int m);

	string encoding(string& message);

	string decoding(string& message);
}