#include"ComptePayant.h"
#include"Devise.h"
#include <iostream>

ComptePayant::ComptePayant()
{
    this->taux = 0.05;
}
ComptePayant::ComptePayant(Client* prop, Devise solde, double taux)
	:Compte(prop,solde)
{
	this->taux = taux;
}     

bool ComptePayant::retirerArgent(Devise montant) {
  Devise com = montant * (taux*10.5);
	Devise r = (montant.operator+(com));
     
	return this->Compte::retirerArgent(r);

}

void ComptePayant::deposerArgent(Devise montant)
{
  Devise d = (montant * (taux*10));
   this->Compte::deposerArgent((montant.operator+(d)));
}




ComptePayant::~ComptePayant() {
    cout << "destructeur ComptePayant" << endl;
}


