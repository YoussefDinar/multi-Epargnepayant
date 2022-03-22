#include "Compte.h"
#include "Client.h"
#include "Operation.h"
#include <iostream>
#include "Devise.h"
#include <vector>


class ComptePayant : public Compte
 {
    public:
ComptePayant();
bool retirerArgent(Devise montant)override;
void deposerArgent(Devise montant)override;
 ~ComptePayant();   
 
 private:
 double taux;
 
};

