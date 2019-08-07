#include <iostream>
#include "Calculadora.h"
#include <vector>

using namespace std;

int main() {
    Calculadora<int, float> miCalc;
    vector<int> pp;

    pp.push_back(3);


    cout << miCalc.divi(10, 3);
    cout << "Ejercicio 00/03\n" << endl;
    return 0;
}