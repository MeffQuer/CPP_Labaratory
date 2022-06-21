#include <iostream>
using namespace std;
const int z = 3;

int main() {
    setlocale(LC_ALL, "ru");
    int x[z][z];
    for(int i=0;i<z;i++) {
            for(int j=0;j<z;j++)
            {
                cout<<"Введите ["<<i<<"]["<<j<<"] элемент массива: ";
                cin>>x[i][j];
            }
    }
        cout<<"Сформированный массив: "<<endl;
        for(int i=0;i<z;i++)
        {
            for(int j=0;j<z;j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<"Решение на 1 пункт: "<<endl;
    if(x[0][0]>x[0][z-1]) cout<<"В левом углу больше."<<endl;
    else cout<<"В правом углу больше."<<endl;
    cout<<"Решение на 2 пункт: "<<endl;
    if(x[0][0]<x[z-1][0]) cout<<"В левом углу меньше."<<endl;
    else cout<<"В правом углу меньше."<<endl;
        
    return 0;
}
