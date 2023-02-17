#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#include "Carro.h"

int main()
{
    Carro c1;
    c1.setMarca("Opala");
    c1.setAno(2017);

    Carro c2("Fiat", 1889);
    c2.setAno(1800);

    cout << c1.getMarca() << endl;
    cout << c1.getAno() << endl;
    cout << c1.pneus << endl;

    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;
    cout << c2.pneus << endl;

    c1.pneus = 2; // trocou aqui e ira refletir em todos os objetos
    cout << c1.getMarca() << endl;
    cout << c1.getAno() << endl;
    cout << c1.pneus << endl;

    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;
    cout << c2.pneus << endl;
    return 0;
}
