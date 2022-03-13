#include "CpEppy.h"

CpEppy::CpEppy(Client* c, Devise* d, double taux):
	CompteEpargne(c,d,taux), Compte(c,d);
{
}

CpEppy::~CpEppy()
{
}
