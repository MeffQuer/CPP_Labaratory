#include <iostream>
using namespace std;

void DateBithday(int &g, int &m, int &d) {
	g, m, d;
	cout << "Введите дату вашего дня рожденя\nдд.мм.гггг через пробел" << endl;
	cin >> d >> m >> g;
	cout << "Вы ввели дату: " << d << "." << m << "." << g << endl;
}

void TodayDate(int &g1, int &m1, int &d1) {
	g1, m1, d1;
	cout << "\nВведите сегодняшнюю дату через пробел" << endl;
	cin >> d1 >> m1 >> g1;
	cout << "Вы ввели дату: " << d1 << "." << m1 << "." << g1 << endl;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int x, y, z, x1, y1, z1;

	DateBithday(x,y,z);
	TodayDate(x1,y1,z1);

	int month;
	month = y1 - y;
	if (month < 0) {
		month *= -1;
	}

	int FullYears;
	FullYears = x1 - x;
	if (month > 0) {
		FullYears -= 1;
	}

	cout << "Ваших полных лет - " << FullYears << endl;

	return 0;
}