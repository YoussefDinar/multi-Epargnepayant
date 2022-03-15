#include "CpEpargne_payant.h"

CpEpargne_payant::CpEpargne_payant(Client* cl, Devise* dev, double tx):
	CompteEpargne(cl,dev,tx), Compte(cl,dev);
{
}

bool CpEpargne_payant::retirerArgent(Devise mont){



}

void CpEpargne_payant::deposerArgent(Devise mont)
 {


 }


CpEpargne_payant::~CpEpargne_payant()
{
}
