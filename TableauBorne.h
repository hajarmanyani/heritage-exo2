#pragma once
#include "tableau.h"
class TableauBorne :
    public tableau
{
private:
    float borne_inf;
    float borne_sup;
public:
    TableauBorne(int taille, float x, float y);
    float& operator[](int index) override;
    void operator()(int index, float val);
    ~TableauBorne();
};

