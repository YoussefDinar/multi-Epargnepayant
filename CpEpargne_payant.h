#pragma once
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include "Devise.h"
#include<iostream>


using namespace std;
class CpEpargne_payant : public CompteEpargne, public ComptePayant
{
public:
	CpEpargne_payant(Client* cl, Devise*dev, double tx);
	bool retirerArgent(Devise mt)override;
	void deposerArgent(Devise mt)override;
	~CpEpargne_payant();

};

