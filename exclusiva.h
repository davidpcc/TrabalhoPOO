#pragma once
#include "Sapataria.h"

class Exclusiva : public Sapataria {
public:
    Exclusiva(int c, string l);
    bool exclusiva() const override;
};
