#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int MEMBER;
    cout << "Сколько участников? ";
    cin >> MEMBER;
    int y;
    int ef = 0, nz = 0;
    for (int i = 0; i < MEMBER; i++)
    {
        cout << "Введите сколько вам лет - ";
        cin >> y;
        if (y <= 1900) {
            cout << "Человек не может столько жить.\nПовторите попытку.\n";
            i--;
        }
        else if (y <= 1985) {
            ef++;
        }
        else if (y >=1990) {
            nz++;
        }
        else {
            cout << "Что-то пошло не так.\n";
        }
    }
    if (ef == 0 && nz == 0) {
        cout << "Нет людей попадающих в эти промежутки.\n";
    }

    cout << "Из группы участников\n<= 1985 - " << ef << "\n>=1990 - " << nz << endl;

    return 0;
}