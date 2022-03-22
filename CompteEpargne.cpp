#include "CompteEpargne.h"
#include <assert.h>
#include "Devise.h"
CompteEpargne::CompteEpargne()
    : Compte()
{

}

CompteEpargne::CompteEpargne(Client* c, Devise* s, double taux)
    : Compte(c,s)
{
    assert(taux >= 0 && taux <= 100);
    this->TauxInteret = taux;

}

void CompteEpargne::Calcul_TauxInteret()
{
  this->Compte::CalculIteret(this->TauxInteret);

}
