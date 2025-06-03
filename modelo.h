#pragma once
#include <string>
using namespace std;

class Venda;

class Modelo {
private:
    int ref;
    string descricao;
    float pvr;
    bool exclusivo;

public:
    Modelo(int r, string d, float p, bool e);
    float getPVR() const;
    string getDescricao() const;
    bool modeloExclusivo() const;
    void setPVRPreco(float v);
    bool registaVenda(Venda* v);
    void print() const;
    bool operator<(const Modelo& outro) const; 
};
