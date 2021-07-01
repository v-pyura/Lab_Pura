#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string x;
    getline(cin, x);
//вводим строку
 /*проводим посимвольную проверку на гласную букву и в случае положительного результата выводим ее на экран*/
    for (int i = 0; i < x.length(); ++i)
        if (x[i] == 'a' || x[i] == 'A' ||
            x[i] == 'e' || x[i] == 'E' ||
            x[i] == 'i' || x[i] == 'I' ||
            x[i] == 'o' || x[i] == 'O' ||
            x[i] == 'u' || x[i] == 'U' ||
            x[i] == 'y' || x[i] == 'Y')  cout << x[i];

    return 0;
 }
