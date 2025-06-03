#include "Venda.h"
#include "Modelo.h"
#include "Sapataria.h"
#include <iostream>
using namespace std;

Venda::Venda(int i, float p, string d, Modelo* m, Sapataria* s) {
    id = i;
    preco = p;
    data = d;
    modelo = m;
    sapataria = s;
}

void Venda::print() const {
    cout << "Venda ID: " << id << " | Preco: " << preco << " | Data: " << data << endl;
    if (modelo != 0) {
        cout << "  Modelo: " << modelo->getDescricao()
            << " (Exclusivo: " << (modelo->modeloExclusivo() ? "Sim" : "Nao") << ")" << endl;
    }
}

bool Venda::operator<(const Venda& outra) const {
    return id < outra.id;
}
