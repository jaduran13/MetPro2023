#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Leer dos numeros
    y  elevar el primer numero a la potencia
    del segundo numero ingresado*/
    double num1, num2;
    cout << "Dame un #: ";
    cin >> num1;
    cout << "Dame otro #: ";
    cin >> num2;
    cout << num1 << " elevado a " << num2 
    << " es " <<pow(num1, num2);
    return 0;
}
