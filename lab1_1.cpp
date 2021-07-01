#include <iostream>
#include <string>
using namespace std;
int main(){
   int i=0;
   int mas[10]={0,1,2,3,4,5,6,7,8,9}; // задаем массив из 10-ти эл-в
    for (i=0; i<10; i++) //заменяем элементы с четным значением на 0
    {if (mas[i]%2==0)
    {mas[i]=0;}
    }
for (i=0; i<10; i++) //вывод массива для проверки
{cout <<"element "<<i<<" = "<<mas[i]<<endl;}
    return 0;
}
