#pragma once
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include "Devise.h"
#include<iostream>
using namespace std;
class CpEppy : public CompteEpargne, public ComptePayant
{

public:
	CpEppy(Client* c, Devise*d, double taux);
	bool retirerArgent(Devise montant)override;
	void deposerArgent(Devise montant)override;
	~CpEppy();


};

