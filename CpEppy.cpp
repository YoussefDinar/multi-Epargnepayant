#include "CpEppy.h"

CpEppy::CpEppy(Client* c, Devise* d, double taux):
	CompteEpargne(c,d,taux), Compte(c,d);
{
}

bool ComptePayant::retirerArgent(Devise montant){



}

void ComptePayant::deposerArgent(Devise montant)
 {


 }


CpEppy::~CpEppy()
{
}
