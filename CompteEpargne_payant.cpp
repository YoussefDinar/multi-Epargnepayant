#include "CompteEpargne_payant.h"

CompteEpargne_payant::CompteEpargne_payant(Client* cl, Devise dev, double dc)
  :CompteEpargne(cl,dev,dc),ComptePayant(),Compte(cl,dev)
{
}

bool CompteEpargne_payant::retirerArgent(Devise mont) {
     
    this->CompteEpargne::retirerArgent(mont);

}

void CompteEpargne_payant::deposerArgent(Devise mont)
{
   
     
    this->CompteEpargne::deposerArgent(mont);
   

}


void CompteEpargne_payant::consultersolde() const
{
   this->Compte::consultersolde();
}
CompteEpargne_payant::~CompteEpargne_payant()
{
    std::cout << "destructeur Compte Epargne payant" << std::endl;
}
