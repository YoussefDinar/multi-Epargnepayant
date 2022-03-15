#pragma once
#include <iostream>
#include "DateH.h"
#include "Devise.h"
using namespace std;

class Operation  {
    private:
    int numop;
    static int cpt;
    DateH date;
    Devise montant;
    string lib;
    
    public: 
    Operation(Devise m,DateH dt,string lb);
    void display()const;
    ~Operation();
}
