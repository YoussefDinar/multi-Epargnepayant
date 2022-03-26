#pragma once
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include "Devise.h"
#include<iostream>


using namespace std;

class CompteEpargne_payant : public CompteEpargne, public ComptePayant
{
public:
    CompteEpargne_payant(Client* cl, Devise dev, double dc);
     CompteEpargne_payant();
   bool retirerArgent(Devise mt)override;
    void deposerArgent(Devise mt)override;
     void consultersolde() const override;
    ~CompteEpargne_payant();

};
