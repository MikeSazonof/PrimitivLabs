#include "Func.h"

using namespace std;

bool func::IsNumericStr(string message) {
	std::stringstream stream(message);
	char test;
	long result;

	if ((!(stream >> result)) || (stream >> test))
		return false;

	return true;
}

int func::Randomize(int lowBar, int topBar) {
	return (rand() % (topBar - lowBar) + lowBar);
}

void func::Randomize(int* arr, int length) {
	for (int i = 0; i < length; i++)
		arr[i] = Randomize(1, INT8_MAX);
}

void func::replaceText(string& str, const string& from, const string& to) {
	if (from.empty())
		return;

	int16_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
};

int32_t func::InputHub(int32_t lowBar, int32_t topBar) {
	if (lowBar > topBar)
		throw new exception("Проблема с границами в inputHub'e");

	int userChoise = 0;
	do {
		ValidateInput(userChoise);
		if (userChoise < lowBar || userChoise > topBar) cout << "Такого варианта нет, повторите попытку : ";
	} while (userChoise < lowBar || userChoise > topBar);

	return userChoise;
}

void func::PrintCondition(string condition) {
	system("CLS");
	cout << "###################\n";
	cout << "Условие:\n";

	vector<string> splitedCond = Split(condition, '.');
	for (int i = 0; i < splitedCond.size(); i++)
		cout << Trim(splitedCond[i]) << ".\n";

	cout << "###################\n\n";
	cout << "Работа программы:\n\n";
}

vector<string> func::Split(const string& s, char delimiter)
{
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter))	
		tokens.push_back(token);
	return tokens;
}

string func::Trim(string& s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
		return !std::isspace(ch);
		}));
	
	s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
		return !std::isspace(ch);
		}).base(), s.end());

	return s;
}

void GetMatr(int** mas, int** p, int i, int j, int m) {
	int ki, kj, di, dj;
	di = 0;
	for (ki = 0; ki < m - 1; ki++) {
		if (ki == i) di = 1;
		dj = 0;
		for (kj = 0; kj < m - 1; kj++) {
			if (kj == j) dj = 1;
			p[ki][kj] = mas[ki + di][kj + dj];
		}
	}
}

int func::GetDeterminant(int** mas, int m) {
	int i, j, d, k, n;
	int** p;
	p = new int* [m];
	for (i = 0; i < m; i++)
		p[i] = new int[m];

	j = 0; d = 0;
	k = 1;
	n = m - 1;

	if (m == 1) {
		d = mas[0][0];
		return(d);
	}

	if (m == 2) {
		d = mas[0][0] * mas[1][1] - (mas[1][0] * mas[0][1]);
		return(d);
	}

	if (m > 2) {
		for (i = 0; i < m; i++) {
			GetMatr(mas, p, i, 0, m);
			d = d + k * mas[i][0] * GetDeterminant(p, n);
			k = -k;
		}
	}

	return(d);
}

string func::encoding(string& message) {
	string newMessage = "";
	bool trigger = false;
	char lastChar = message[0];
	short counter = 1;

	for (int i = 0; i < message.length() - 1; i++) {
		if (message[i] == message[i + 1]) {
			lastChar = message[i];
			trigger = true;
			counter++;
			continue;
		}

		if (trigger) {
			newMessage += "#" + to_string(lastChar) + "_" + to_string(counter) + "#";
			counter = 1;
			trigger = false;
			lastChar = message[i];
		}
		else {
			newMessage += message[i];
		}
	}

	if (trigger) {
		newMessage += "#" + to_string(lastChar) + "_" + to_string(counter) + "#";
	}
	else {
		newMessage += message[message.length() - 1];
	}

	cout << "\n\nСтарая строка : " << message << "\n";
	cout << "Новая строка после кодировки: " << newMessage << "\n";
	return newMessage;
}

string func::decoding(string& message) {
	string newMessage = "";

	for (int i = 0; i < message.length(); i++) {
		if (message[i] == '#') {
			int count = stoi(message.substr(message.find('_', i) + 1, message.find('#', i) - message.find('_', i) - 1));
			char simbol = (char)(stoi(message.substr(i + 1, message.find('_', i) - i - 1)));

			for (int i = 0; i < count; i++)
				newMessage += simbol;

			i = message.find('#', i + 1);
			continue;
		}
		newMessage += message[i];
	}

	cout << "Сдекодированная строка: " << newMessage;
	return newMessage;
}