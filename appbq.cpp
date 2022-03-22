#include "appbq.h"
Appbq::Appbq()
{
	this->TC = vector<Compte*>();
}


void Appbq::Addacc(Compte* c)
{
	this->TC.push_back(c);
}


Compte& Appbq::operator[](int i)
{
	return *this->TC[i];
}
void Appbq::afficher() const
{
	for (int i = 0; i < this->TC.size(); i++)
	{

		this->TC[i]->consultersolde();
	}
	

}

Appbq::~Appbq()
{
	this->TC.clear();
}
