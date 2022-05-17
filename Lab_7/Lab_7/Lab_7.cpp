#include <iostream>
#include <cmath>
using namespace std;

int foo()
{
    cout << "Введите двузначное число:";
	int x;
	cin >> x;
	while (x < 10)
	{
		cout << "Введите двузначное число:";
		cin >> x;
	}
    int a, b, c, n = 0;

    for (a = 3; a <= x; a++)
    {
        c = a / 2;
        int d = 0;

        for (b = 2; b <= c; b++)
            if ((a % b) == 0)
            {
                d++;
                break;
            }
        if (d == 0)
        {
            cout << a << "\t";
            n++;
            if ((n > 0) && ((n % 10) == 0))
                cout << "\n";
        }
    }
    cout << "\nКоличество простых чисел: " << n << "\n";
	return 1;
}


double sum(double x, int n, double z, double a)
{
    if (n == 1) return 1;
    z *= -x * x / (a - 1) / a;
    return z + sum(x, n - 1, z, a + 2);
}


int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "Выберите задачу:\n1 - простые числа\n2 - Геометрическая прогрессия\n";
    int x = 0;
    cin >> x;
    while (x < 1 || x > 2)
    {
        cout << "Выберите корректную цифру!";
        cin >> x;
    }
    switch (x)
    {
    case 1:
        foo();
        break;
    case 2:
        int n, k, r = 1;
        cin >> n >> k;
        cout << sum(n, k, 1, 3);
        break;
    }
	
    return 0;
}