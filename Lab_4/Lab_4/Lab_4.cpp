#include <iostream>
#include <cmath>

using namespace std;

void Circle_Point() {
	float XCircle = 0, YCircle = 0, Radius = 5, XPoint, YPoint;
	cout << ("\nВведите координаты точки \"x\" и \"y\": ");
	cin >> XPoint >> YPoint;

	bool answer = pow((XPoint - XCircle), 2) + pow((YPoint - YCircle), 2) <= pow(Radius, 2);
	cout << answer << endl;

	if (answer && YPoint >= XPoint) {
		cout << "Окружность находится в заданной точке и она заштрихована.\n";
	}
	else
	{
		cout << "Точка не попадает в заданную область\n";
	}
}

void CubeCheck() {
	int x1, y1, x2, y2, a1, b1;
	cout << "Введите координаты угла 1-го квадрта: ";
	cin >> x1 >> y1;
	cout << "\nВведите координаты угла 2-го квадрта: ";
	cin >> x2 >> y2;
	cout << "\nВведите длину 1-го и 2-го квадрата: ";
	cin >> a1 >> b1;

	
	if ((x1 <= x2 && x2 <= x1 + a1) && (y1 <= y2 && y2 <= y1 + b1))
	{
		cout << "Первый квадрат принадлежит второму квадрату.";
	} else if (a1 || b1 < 0) {
		cout << "Длина не может быть отрицательным.";
	}
	else
	{
		cout << "Квадраты не принадлежать друг другу.";
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int option;
	cout << "1 - Задание №1 (Окружность с точка координат)\n2 - Задание №2 (Равенство Квадратов)\n";
	cin >> option;
	if (option > 2 || option < 1)
	{
		cout << "Не верный ввод.";
	}
	switch (option)
	{
	case 1:
		Circle_Point();
		break;
	case 2:
		CubeCheck();
		break;
	}
	
	return 0;
}