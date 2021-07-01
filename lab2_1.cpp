#include <iostream>
#include <math.h>
using namespace std;
int main()
{  float a, b, c;
    cout <<" в уравнении a*x^2+B*x+c=0"<<endl; 
/*задаем значения параметров*/
    cout<<"введите а = "; cin >>a;
    cout<<"введите b = "; cin >>b;
    cout<<"введите c = "; cin >>c;
/*выводим корни*/
    cout<<"\n x1="<< (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"\n x2="<< (-b+sqrt(b*b-4*a*c))/(2*a);
        return 0;
}
