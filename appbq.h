#pragma once
#include <iostream>
#include <vector>
#include "Compte.h"
using namespace std;



class Appbq
{
	vector<Compte* > TC;
public:
	Appbq();
	~Appbq();
	void Addacc(Compte* c);
	
	virtual void afficher() const;

	Compte& operator [](int i);
};
