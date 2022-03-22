#include "Compte.h"
#include  "Devise.h"
int Compte::cpt = 0;
Compte::Compte(): numCompte(++cpt)
{
    this->solde = new Devise(0.0);
    this->Proprietaire = new Client();
    this->historique = vector<Operation*>();
}


Compte::Compte(Client* Prop, Devise solde) : numCompte(++cpt)
{
    this->Proprietaire = Prop;
    this->solde = solde;
    this->historique = vector<Operation*>();
}

void Compte::deposerArgent(Devise montant) {
   // DateH sysd = DateH(15, 19, 00, 03, 20, 2022);
    this->solde.operator+=(montant);
    Operation* op = new Operation(montant,  "+");

    this->historique.push_back(op);

}

 bool Compte::retirerArgent(Devise montant)
{
  //  DateH sysd = DateH(15, 19, 00, 03, 20, 2022);
    if ((this->solde) >= montant) {
        this->solde.operator-=(montant);
        Operation* op = new Operation(montant,  "-");

        this->historique.push_back(op);

        return true;
    }

    return false;
}

 void Compte::CalculIteret( Devise taux)
{
  this->solde=this->solde*taux;
}

bool Compte::checkSolde( Devise montant)
{
    if (this->solde/2.0>= montant);
    return true;
    return false;
}


bool Compte::transfererArget(Compte* c, Devise montant)
{
  if(  this->retirerArgent(montant))
  {
c->deposerArgent(montant);
return true;
  }
    return false;
}

void Compte::consultersolde() const
{
    std::cout << " Numcomte: " << this->numCompte << endl;
    this->Proprietaire->afficher();
    std::cout << " solde: ";
    this->solde.afficherDevise();
    std::cout << " \n ";
    for (int i = 0; i < this->historique.size(); i++)
    {
        cout << i << " -> ";
        this->historique[i]->display();
        cout << endl;
    }


}

Compte::~Compte()
{
    cout << "destructeur Compte";
    for (int i = 0; i < this->historique.size(); i++)
    {

        delete this->historique[i];
        this->historique[i] = 0;
    }
    this->historique.clear();

}
