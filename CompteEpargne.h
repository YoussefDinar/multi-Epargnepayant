#pragma once
#include "Compte.h"

class CompteEpargne : public virtual Compte
{

public:
    CompteEpargne();
    CompteEpargne(Client* c, Devise d, double taux);
    bool retirerArgent(Devise montant);
   void Calcul_TauxInteret();
    
private:

    double TauxInteret;

};
