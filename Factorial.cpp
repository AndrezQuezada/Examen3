#include <stdio.h>
#include <iostream>
using namespace std;

int factorial(int a) {


    int factorials = 0;
    for (int i = 1; i <= a; i++) {
        factorials = a * i;
        factorials = factorials;

    }
    cout << "numero factorial: " << factorials;

    return 0;
}

int main()
{
    factorial(5);

    return 0;
}

