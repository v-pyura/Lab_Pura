#include <iostream>
using namespace std;
int main()
{ int i, j, oo=0;
cout << "исходный массив ";
int mas[10];
/* заполним массив случайными числами и выведем полученный массив на экран*/
for (i=0; i<10;i++)
{mas[i]=rand()%100-50;
cout << " \n элемент "<<i<<" = "<< mas[i];
}
cout << "\n полученный массив";
/* сортировка массива по убыванию методом пузырька*/
for (i=0;i<10;i++)
{
for (j=0; j<10;j++)
if (mas[i]>mas[j]) {
    oo=mas[i];
    mas[i]=mas[j];
    mas [j]=oo;}
}
/* выведем полученный массив*/
for (i=0; i<10;i++)
{cout << " \n элемент "<<i<<" = "<< mas[i];}
    return 0;}
