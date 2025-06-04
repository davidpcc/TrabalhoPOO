#include "Sapataria.h"

Sapataria::Sapataria(int c, string l) {
    codigo = c;
    localizacao = l;
}

int Sapataria::getCodigo() const {
    return codigo;
}

string Sapataria::getLocalizacao() const {
    return localizacao;
}

void Sapataria::addVenda(Venda* v) {
    vendas += v;
}

const Colecao<Venda*>& Sapataria::getVendas() const {
    return vendas;
}

Sapataria::~Sapataria() {}
