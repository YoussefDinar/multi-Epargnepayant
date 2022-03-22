#include "CompteCourant.h"

CompteCourant::CompteCourant(Client* c, Devise s, Devise dec)
    : Compte(c, s)
{
    this->decouvert = dec;
}

bool CompteCourant::retirerArgent(Devise montant)
{
    if (this->Compte::checkSolde(this->decouvert))
        return this->Compte::retirerArgent(montant);

    return false;
}
