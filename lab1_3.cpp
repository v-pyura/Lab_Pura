#include <iostream>
#include <string>
using namespace std;
int main(){
   int i=0, j=0;
int matr[3][3]; //задаем матрицу 3 на 3
for (i=0; i<3;i++) //вводим элементы для каждой из строк (построчно)
{cout <<" введите элементы "<< (i+1)<<" строки"<<endl;
for (j=0;j<3;j++)
{
    cin>> matr[i][j];
}
}
// выводим полученный определитель
cout << " определитель ="<< (matr[0][0]*(matr[1][1]*matr[2][2]-matr[1][2]*matr[2][1])-
matr[0][1]*(matr[1][0]*matr[2][2]-matr[1][2]*matr[2][0])+
matr[0][2]*(matr[1][0]*matr[2][1]-matr[1][1]*matr[2][0]));
    return 0;
}
