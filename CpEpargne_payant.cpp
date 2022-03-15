#include "CpEpargne_payant.h"

CpEpargne_payant::CpEpargne_payant(Client* c, Devise* d, double taux):
	CompteEpargne(c,d,taux), Compte(c,d);
{
}

bool CpEpargne_payant::retirerArgent(Devise montant){



}

void CpEpargne_payant::deposerArgent(Devise montant)
 {


 }


CpEpargne_payant::~CpEpargne_payant()
{
}
