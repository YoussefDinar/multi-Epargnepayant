
#include<iostream>
#include"Operation.h"
#include "DateH.h"
#include "Devise.h"

int Operation::cpt = 0;

Operation::Operation(Devise md,DateH dt,string lb)
{
 this->numop= ++Operation::cpt;
this->date=dt;
this->montant=md;
this->lib=lb;

}



void Operation::display()const{
cout<<this->date<<"||"<<this->numop<<"||"<<this->montant<<"||"<<this->lib<<endl;
}

Operation::~Operation(){

cout<<"destructeur Operation"<<endl;

}
