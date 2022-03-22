#pragma once
#include "Compte.h"
#include "Devise.h"


class CompteCourant :
    public Compte
{
    CompteCourant(Client* c, Devise s, Devise dec);

    bool retirerArgent(Devise montant)override;

private:
    Devise decouvert;

};
