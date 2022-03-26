#include "CompteEpargne.h"
#include <assert.h>
#include "Devise.h"
CompteEpargne::CompteEpargne()
    : Compte()
{

}

CompteEpargne::CompteEpargne(Client* c, Devise s, double taux)
    : Compte(c,s)
{
    assert(taux >= 0 && taux <= 100);
    this->TauxInteret = taux;

}

void CompteEpargne::Calcul_TauxInteret()
{
  this->Compte::CalculIteret(this->TauxInteret);
   //  this->deposerArgent(taux);

}


bool CompteEpargne::retirerArgent(Devise montant)
{
    CompteEpargne Ce;
    if (*(this->solde) / 2 >= montant)
    {
        if (typeid(*this) == typeid(Ce))
             return this->Compte::retirerArgent(montant);
        else return true;
    }

    return false;
}
