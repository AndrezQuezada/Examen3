#include <stdio.h>
#include <iostream>
using namespace std;

int factorial(int a) {


    int factorials = 0;
    for (int i = 1; i <= a; i++) {
        factorials = a * i;
        factorials = factorials;

    }
    cout << "numero factorial: " << factorials << endl;

    return 0;
}

void consultar(int a) {


    cout << a;

}

void retirar(int a) {

    int retiro;
    cout << "Ingrese la cantidad a retirar";
    cin >> retiro;
    int retirada = a - retiro;
    cout << "Saldo Final" << retirada;

}



int main()
{
    factorial(5);
    int cuenta = 2000;

    cout << "tu saldo es de: " << cuenta << endl;

    consultar(cuenta);



    retirar(cuenta);

    return 0;
}