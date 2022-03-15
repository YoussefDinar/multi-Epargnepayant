#include "CompteEpargne_payant.h"

CompteEpargne_payant::CompteEpargne_payant(Client* cl, Devise* dev, double tx):
CompteEpargne(cl,dev,tx), Compte(cl,dev);
{
}

bool CompteEpargne_payant::retirerArgent(Devise mont){


}

void CompteEpargne_payant::deposerArgent(Devise mont)
 {

 }


CompteEpargne_payant::~CpEpargne_payant()
{
}
