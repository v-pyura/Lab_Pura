#include <iostream>
using namespace std;
const int c1=100; //задаем нижнюю границу
const int c2=5000; //задаем верхнюю границу
int main(){
//выводим случайное число
cout <<  "случайное число в диапазоне от "<<c1<<" до "<<c2<<" = "<< (c1+ rand()%(c2-c1))<< endl;
return 0;
}
