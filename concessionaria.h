#pragma once
#include "Sapataria.h"

class Concessionaria : public Sapataria {
public:
    Concessionaria(int c, string l);
    bool exclusiva() const override;
};
