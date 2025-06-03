#pragma once
#include <string>
using namespace std;

class Modelo;
class Sapataria;

class Venda {
private:
    int id;
    float preco;
    string data;
    Modelo* modelo;
    Sapataria* sapataria;

public:
    Venda(int i, float p, string d, Modelo* m, Sapataria* s);
    void print() const;
    bool operator<(const Venda& outra) const;
};
