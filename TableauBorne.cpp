#include "TableauBorne.h"
#include "tableau.h"
#include <assert.h>
#include "iostream"
using namespace std;
TableauBorne::TableauBorne(int taille, float x, float y):tableau(taille)
{
	this->borne_inf= (x >= 0 && x < taille) ? x : 0;
	this->borne_sup = (y<taille && y > x) ? y : 10;
}

float& TableauBorne::operator[](int index)
{
	if (index >= this->borne_inf && index <= this->borne_sup){
		return this->tab[index];
	}
}

void TableauBorne::operator()(int index, float val)
{
	if (index < taille && index >= this->borne_inf && index <= this->borne_sup) {
		this->tab[index] = val;
	}
	else {
		std::cout << "Index erroné ! " << std::endl;
	}
}

TableauBorne::~TableauBorne()
{
	std::cout << "Destructeur de la classe _TableauBorne_ " << std::endl;
}
