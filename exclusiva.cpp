#include <iostream>
#include "Camport.h"

using namespace std;

int main() {
    Camport manutencao;

    manutencao.addModelo("Botas Panzer Castanho Claro", 109.99, true);
    manutencao.addModelo("Sapatos Fashion Light Suede Azul", 49.99, false);
    manutencao.addModelo("Ténis Punha", 79.99, false);

    manutencao.addExclusiva("Guimaraes");    // id = 1
    manutencao.addConcessionaria("Braganca"); // id = 2

    if (!manutencao.registarVenda(5, 1, 120.00, "01/04/25")) {
        cout << "A Sapataria nao existe!" << endl;
    }

    manutencao.setPVR(3, 54.99);

    if (!manutencao.registarVenda(1, 2, 120.00, "01/04/25")) {
        cout << "Botas Panzer Castanho Claro - Modelo nao comercializado em Sapatarias Concessionarias" << endl;
    }

    manutencao.registarVenda(2, 2, 60.00, "02/04/25");
    manutencao.registarVenda(1, 1, 109.99, "03/04/25");
    manutencao.registarVenda(3, 1, 70.00, "04/04/25");

    cout << "Vendas da Sapataria Exclusiva Camport localizada em Guimaraes:" << endl;
    manutencao.printVendasSapataria(1);

    cout << "Vendas da Sapataria Concessionaria localizada em Braganca:" << endl;
    manutencao.printVendasSapataria(2);

    return 0;
}
