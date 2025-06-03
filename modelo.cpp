#include "Modelo.h"
#include <iostream>
using namespace std;

Modelo::Modelo(int r, string d, float p, bool e) {
    ref = r;
    descricao = d;
    pvr = p;
    exclusivo = e;
}

float Modelo::getPVR() const { return pvr; }
string Modelo::getDescricao() const { return descricao; }
bool Modelo::modeloExclusivo() const { return exclusivo; }
void Modelo::setPVRPreco(float v) { pvr = v; }
bool Modelo::registaVenda(Venda* v) { return true; }
void Modelo::print() const {
    cout << "Modelo id: " << ref << " | " << descricao << " | PVR: " << pvr
        << " | Exclusivo: " << (exclusivo ? "Sim" : "Nao") << endl;
}
bool Modelo::operator<(const Modelo& outro) const {
    return ref < outro.ref;
}
