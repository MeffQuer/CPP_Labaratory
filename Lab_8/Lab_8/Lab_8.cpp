#include <iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(LC_ALL, "russian");
    cout << "Начать - 1\nЗакончить - 2\nПриступаем? ";
    int c;
    cin >> c;
    while (c < 1 || c > 2)
    {
        cout << "Неверный ввод, повторите снова. ";
        cin >> c;
    }
    if (c == 2) {
        cout << "Программа завершена.\n";
        return 0;
    }
    string text, xtext;
    cout << "Первое слово: ";
    cin >> text;
    cout << "Второе слово: ";
    cin >> xtext;
    if (text == xtext) {
        cout << "Слова идентичны." << endl << endl;
    } else {
        cout << "Слова разные" << endl << endl;
    }
    
    return 0;
}