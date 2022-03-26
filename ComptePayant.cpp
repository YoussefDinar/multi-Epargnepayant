#include"ComptePayant.h"
#include"Devise.h"
#include <iostream>

ComptePayant::ComptePayant(Client* prop, Devise solde, double taux)
	:Compte(prop,solde)
{
	this->taux = taux;
}        

ComptePayant::ComptePayant()
{
    this->taux = 0.05;
}

bool ComptePayant::retirerArgent(Devise montant) {
  
       Devise d = (montant * (this->taux/100));
    this->Compte::retirerArgent(d.operator+(montant));
       
}

void ComptePayant::deposerArgent(Devise montant)
{
   Devise d = (montant * (taux*100));
   this->Compte::deposerArgent((montant.operator+(d)));

}




ComptePayant::~ComptePayant() {
    cout << "destructeur ComptePayant" << endl;
}
