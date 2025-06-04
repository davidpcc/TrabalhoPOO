#include "Concessionaria.h"

Concessionaria::Concessionaria(int c, string l) : Sapataria(c, l) {}

bool Concessionaria::exclusiva() const {
    return false;
}
