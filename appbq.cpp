#include "appbq.h"
Appbq::Appbq()
{
	this->TC = vector<Compte*>();
}

Appbq::~Appbq()
{
	this->TC.clear();
}

void Appbq::Addacc(Compte* c)
{
	this->TC.push_back(c);
}

void Appbq::afficher() const
{
	for (int i = 0; i < this->TC.size(); i++)
	{

		this->TC[i]->consultersolde();
	}
	

}

Compte& Appbq::operator[](int i)
{
	return *this->TC[i];
}
