#include <iostream>
#include "complejos.h"

int main(){
    Complejo comp1 (5,2);
    Complejo comp2 (1,3);

    comp1.imprimir();
    comp2.imprimir();

    Complejo result;
    result.suma(comp1, comp2);
    result.imprimir();

    result.resta(comp1, comp2);
    result.imprimir();
}