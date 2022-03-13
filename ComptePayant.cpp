#include"ComptePayant.h"
#include"Devise.h"
#include <iostream>

ComptePayant::ComptePayant()            
    {
    }

bool ComptePayant::retirerArgent(Devise montant){

this->Compte::retirerArgent(montant);
this->Compte::retirerArgent(montant*0.5);

}

void ComptePayant::deposerArgent(Devise montant)
 {
 this->Compte::deposerArgent(montant);
this->Compte::deposerArgent(montant*0.5);

 }

ComptePayant::~ComptePayant(){
cout<<"destructeur ComptePayant"<<endl;
}
