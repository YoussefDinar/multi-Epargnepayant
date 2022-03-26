#include "CompteEpargne_payant.h"

CompteEpargne_payant::CompteEpargne_payant(Client* cl, Devise dev, double dc)
  :CompteEpargne(cl,dev,dc),ComptePayant(),Compte(cl,dev)
{
}

CompteEpargne_payant::CompteEpargne_payant()
{
  
}



bool CompteEpargne_payant::retirerArgent(Devise mont) {
     if (this->CompteEpargne::retirerArgent(mont))
    return this->ComptePayant::retirerArgent(mont);

}




void CompteEpargne_payant::consultersolde() const
{
   this->Compte::consultersolde();
}
CompteEpargne_payant::~CompteEpargne_payant()
{
    std::cout << "destructeur Compte Epargne payant" << std::endl;
}
