#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;

class Carro
{
    public:
        Carro(); // Construtor padrão
        Carro(string marca, int ano); // Construtor
        ~Carro(); // Destrutor
        void setMarca(string marca);
        string getMarca();
        void setAno(int ano);
        int getAno();

    private:
        string marca;
        int ano;
};

#endif // CARRO_H
