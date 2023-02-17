#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Carro {
    public:
        string marca;
        int ano;
    private:
        string cor;
};

int main()
{
    Carro c1;
    c1.marca = "Fiat";
    c1.ano = 2017;

    Carro c2;
    c2.marca = "Ferrari";
    c2.ano = 2015;

    cout << c1.marca << endl;
    cout << c2.marca << endl;

    return 0;
}
