#pragma once
#include<iostream>
#include"Client.h"
//#include"Devise.h"
class Devise; // pr�-declaration 
using namespace std;
class Compte
{
public:
    Compte();
    Compte(Client* Prop, Devise solde);
    virtual bool transfererArgent(Compte* c, Devise montant) ;
    virtual void consultersolde() const;
    virtual void deposerArgent(Devise montant);
    virtual bool retirerArgent(Devise montant);
    void CalculIteret(Devise taux);
    bool checkSolde(Devise montant);
    ~Compte();
private:
    const int numCompte;
    static int cpt;
    Client* Proprietaire;
    Devise solde;
    vector<Operation* > historique;
};
