#include <iostream>
#include "camport.h"

using namespace std;

int main() {

	Camport  manutencao;

	// Adiciona modelos de sapatos
	manutencao.addModelo("Botas Panzer Castanho Claro", 109.99, true);
	manutencao.addModelo("Sapatos Fashion Light Suede Azul", 49.99, false);
	manutencao.addModelo("Ténis Punha", 79.99, false);

	// Adiciona sapatarias exclusivas
	manutencao.addExclusiva("Guimaraes"); // 1
	manutencao.addConcessionaria("bragança");; // 2


	// Regista vendas
	if (!manutencao.registarVenda(5, 1, 120.00, "01/04/25")) {
		cout << "A Sapataria nao existe!" << endl;
	}
	// Altera/Muda o PVR
	manutencao.setPVR(3, 54.99);

	if (!manutencao.registarVenda(2, 1, 120.00, "01/04/25")) {
		cout << "Botas Panzer Castanho Claro - Modelo nao comercializado em Sapatarias Concessionarias" << endl;
	}

	cout << "Vendas da Sapataria Exclusiva Camport localizada em Guimaraes:" << endl;
	manutencao.printVendasSapataria(1);

	cout << "Vendas da Sapataria Concessionaria localizada em Braganca:" << endl;
	manutencao.printVendasSapataria(2);
	

	return 0;
}
