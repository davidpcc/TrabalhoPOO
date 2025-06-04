#pragma once
#include <string>
#include "Colecao.h"
#include "Venda.h"
using namespace std;

class Sapataria {
protected:
    int codigo;
    string localizacao;
    Colecao<Venda*> vendas;

public:
    Sapataria(int c, string l);
    int getCodigo() const;
    string getLocalizacao() const;
    virtual bool exclusiva() const = 0;
    void addVenda(Venda* v);
    const Colecao<Venda*>& getVendas() const;
    virtual ~Sapataria();
};
