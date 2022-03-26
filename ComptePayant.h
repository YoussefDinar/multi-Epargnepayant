#include "Compte.h"
#include "Client.h"
#include "Operation.h"
#include <iostream>
#include "Devise.h"
#include <vector>


class ComptePayant : public virtual Compte
{
public:
    ComptePayant(Client* prop, Devise solde, double taux);
    ComptePayant();
    bool retirerArgent(Devise montant);
    void deposerArgent(Devise montant);
   
    
    ~ComptePayant();
private:
    double taux;
};
