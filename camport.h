#pragma once
#include "Colecao.h"
#include "Modelo.h"
#include "Sapataria.h"
#include "Exclusiva.h"
#include "Concessionaria.h"

class Camport {
private:
    Colecao<Modelo*> modelos;
    Colecao<Sapataria*> sapatarias;
    int idModelo;
    int idSapataria;
    int idVenda;

public:
    Camport();
    void addModelo(string descricao, float pvr, bool exclusivo);
    void addExclusiva(string localizacao);
    void addConcessionaria(string localizacao);
    bool registarVenda(int idModelo, int idSapataria, float preco, string data);
    void setPVR(int idModelo, float novoPVR);
    void printVendasSapataria(int idSapataria) const;
};
