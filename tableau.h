#pragma once
class tableau
{
protected:
	float* tab;
	int taille;
public:
	tableau(int taille);
	tableau(const tableau& T,int taille);
	void saisie();
	tableau& operator=(const tableau& T);
	virtual float& operator[](int index);
	~tableau();
};

