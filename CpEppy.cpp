#include "CpEppy.h"

CpEppy::CpEppy(Client* c, Devise* d, double taux):
	CompteEpargne(c,d,taux), Compte(c,d);
{
}

bool ComptePayant::retirerArgent(Devise montant){

this->Compte::retirerArgent(montant);
this->Compte::retirerArgent(montant*0.05);

}

void ComptePayant::deposerArgent(Devise montant)
 {
 this->Compte::deposerArgent(montant);
this->Compte::deposerArgent(montant*0.05);

 }


CpEppy::~CpEppy()
{
}
