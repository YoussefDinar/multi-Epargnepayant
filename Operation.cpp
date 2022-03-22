
#include<iostream>
#include"Operation.h"
//#include "DateH.h"
#include "Devise.h"



int Operation::cpt = 0;

Operation::Operation(Devise md, string lb)
{
    this->numop = ++Operation::cpt;
    //this->date = dt;
    this->montant = md;
    this->lib = lb;

}



void Operation::display()const {
    /*this->date.print();
    cout << "||";*/
    cout << this->numop << "||";
    this->montant.afficherDevise();
    cout << "||";
    cout << this->lib << endl;
}

Operation::~Operation() {

    std::cout << "destructeur Operation" << std::endl;

}
