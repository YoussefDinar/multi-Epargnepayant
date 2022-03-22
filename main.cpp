#include<iostream>
using namespace std;
#include<vector>
#include<assert.h>
#include"Devise.h"
#include"Operation.h"
#include"Client.h"
#include"Compte.h"
#include"CompteEpargne.h"
#include"CompteCourant.h"
#include"ComptePayant.h"
#include"CompteEpargne_payant.h"
#include"appbq.h"


int main()
{
   Client* p2 = new Client("p1", "p1");
    
    
  /*  Compte *c4=new Compte(p2,100);
    c4->deposerArgent(20);
  c4->retirerArgent(50);
  c4->deposerArgent(10);
    c4->consultersolde();*/
    
    CompteEpargne_payant *C1=new CompteEpargne_payant(p2, 2555, 1);
    C1->deposerArgent(100);
    C1->retirerArgent(100);
     C1->consultersolde();
   
   
   int main()
{
   Client* p2 = new Client("p1", "p1");
    
    
  Compte *c4=new Compte(p2,1000);
    c4->deposerArgent(20);
  c4->retirerArgent(50);
 // c4->deposerArgent(10);
  //  c4->consultersolde();
    cout<<"********CompteEpargne_payant*********"<<endl;
    CompteEpargne_payant *C1=new CompteEpargne_payant(p2, 2555, 1);
    C1->deposerArgent(100);
    C1->retirerArgent(100);
    C1->consultersolde();
   
   
   
   cout<<"************App banque************"<<endl;
   Appbq tab;
   
    tab.Addacc(c4);
    tab[0].deposerArgent(530);
    bool x;
    x = tab[0].retirerArgent(124);
  tab.afficher();
   
   
   
 return 0;
 
   

}
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
 return 0;
 
   

}
