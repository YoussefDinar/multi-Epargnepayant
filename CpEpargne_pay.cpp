#include "CpEpargne_pay.h"

CpEpargne_pay::CpEpargne_pay(Client* c, Devise* d, double taux):
	CompteEpargne(c,d,taux), Compte(c,d);
{
}

bool CpEpargne_pay::retirerArgent(Devise montant){



}

void CpEpargne_pay::deposerArgent(Devise montant)
 {


 }


CpEpargne_pay::~CpEpargne_pay()
{
}
