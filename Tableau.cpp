#include <iostream>
#include "tableau.h"
#include <assert.h>
using namespace std;

tableau::tableau(int taille)
{
	this->tab = new float[taille];
	for (int i = 0; i < taille;i++) {
		this->tab[i] = 0;
	}
	this->taille = taille;
}
tableau::tableau(const tableau &T,int taille) {
	this->tab = new float[taille];
	assert((taille >= 0 && taille < T.taille));
	for (int i = 0; i < taille ; i++) {
		this->tab[i] = T.tab[i];
	}
	this->taille = taille;
}

void tableau::saisie()
{
	for (int i = 0; i < this->taille;i++) {
		std::cin >> this->tab[i];
	}
}

tableau& tableau::operator=(const tableau& T)
{
	if (this!=&T) {
		delete[] this->tab;
		this->tab = 0;
		this->tab = new float[T.taille];
		for (int i = 0; i < T.taille; i++) {
			this->tab[i] = T.tab[i];
		}
	}
	return *this;
}

float& tableau::operator[](int index)
{
	assert((index >= 0 && index < this->taille));
	return this->tab[index];
}

tableau::~tableau()
{
	std::cout << "Destructeur de la classe _tableau_" << std::endl;
	delete[] this->tab;
	this->tab = 0;
}