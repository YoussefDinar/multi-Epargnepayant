#pragma once
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include "Devise.h"
#include<iostream>
using namespace std;
class CpEpargne_payant : public CompteEpargne, public ComptePayant
{

public:
	CpEpargne_payant(Client* c, Devise*d, double taux);
	bool retirerArgent(Devise montant)override;
	void deposerArgent(Devise montant)override;
	~CpEpargne_payant();


};

