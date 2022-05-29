#include <iostream>
using namespace std;

struct cmd {
	int predmet;
	int predmet1;
	int predmet2;
	int predmet3;
	int predmet4;
	char name[10];
};
int main()
{
	setlocale(LC_ALL, "rus");
	cmd players[8];
	for (int i = 0; i < 3; i++) {
		cout << "Пожалуйста, введите имя спортсмена : " << '\n';

		cin >> players[i].name;
		cout << "Введите оценку по  1-ому предмету " << players[i].name << '\n'; cin >> players[i].predmet;
		cout << "Введите оценку по  2-ому предмету " << players[i].name << '\n'; cin >> players[i].predmet1;
		cout << "Введите оценку по  3-ему предмету " << players[i].name << '\n'; cin >> players[i].predmet2;
		cout << "Введите оценку по  4-ому предмету " << players[i].name << '\n'; cin >> players[i].predmet3;
		cout << "Введите оценку по  5-ому предмету " << players[i].name << '\n'; cin >> players[i].predmet4;

	}
	int min = players[0].predmet | players[0].predmet1 | players[0].predmet2 | players[0].predmet3 | players[0].predmet4;
	for (int i = 1; i < 3; i++)
	{
		if (players[i].predmet || players[i].predmet1 || players[i].predmet2 || players[i].predmet3 || players[i].predmet4 < min)
			min = players[i].predmet | players[i].predmet1 | players[i].predmet2 | players[i].predmet3 | players[i].predmet4;
		cout << "Минимальное кол-во баллов у " << players[i].name << " " << min << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Общее кол-во баллов у " << players[i].name << " составляет: " << (players[i].predmet + players[i].predmet1 + players[i].predmet2 + players[i].predmet3 + players[i].predmet4) << endl;
	}
	

	return 0;

}