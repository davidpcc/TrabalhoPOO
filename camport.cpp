#include "Camport.h"
#include "Venda.h"
#include <iostream>
using namespace std;

Camport::Camport() {
    idModelo = 1;
    idSapataria = 1;
    idVenda = 1;
}

void Camport::addModelo(string descricao, float pvr, bool exclusivo) {
    modelos += new Modelo(idModelo++, descricao, pvr, exclusivo);
}

void Camport::addExclusiva(string localizacao) {
    sapatarias += new Exclusiva(idSapataria++, localizacao);
}

void Camport::addConcessionaria(string localizacao) {
    sapatarias += new Concessionaria(idSapataria++, localizacao);
}

bool Camport::registarVenda(int idMod, int idSap, float preco, string data) {
    Modelo* m = nullptr;
    Sapataria* s = nullptr;
    for (int i = 0; i < modelos.tamanho(); i++) {
        if (i + 1 == idMod) {
            m = modelos[i];
            break;
        }
    }
    for (int i = 0; i < sapatarias.tamanho(); i++) {
        if (sapatarias[i]->getCodigo() == idSap) {
            s = sapatarias[i];
            break;
        }
    }
    if (s == nullptr || m == nullptr || preco < m->getPVR()) return false;
    if (m->modeloExclusivo() && !s->exclusiva()) return false;
    Venda* v = new Venda(idVenda++, preco, data, m, s);
    s->addVenda(v);
    return true;
}

void Camport::setPVR(int idMod, float novoPVR) {
    for (int i = 0; i < modelos.tamanho(); i++) {
        if (i + 1 == idMod) {
            modelos[i]->setPVRPreco(novoPVR);
            break;
        }
    }
}

void Camport::printVendasSapataria(int idSap) const {
    for (int i = 0; i < sapatarias.tamanho(); i++) {
        if (sapatarias[i]->getCodigo() == idSap) {
            cout << sapatarias[i]->getLocalizacao() << " - "
                << (sapatarias[i]->exclusiva() ? "Exclusiva" : "Concessionaria") << endl;
            for (int j = 0; j < sapatarias[i]->getVendas().tamanho(); j++) {
                sapatarias[i]->getVendas()[j]->print();
            }
        }
    }
}
