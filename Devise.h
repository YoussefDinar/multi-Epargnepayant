#pragma once
#include<iostream>
class Devise
{


public: 
	Devise();
	Devise(double); 
	void afficherDevise();
	Devise& operator+=(const Devise &d2);
	Devise& operator-=(const Devise& d2);
        Devise operator-( Devise& d2);
   
        Devise operator+( Devise& d2);
	bool operator>=(Devise& D) const;
	Devise operator/(double val);
	Devise operator*(Devise& D);
	Devise operator*(double D);
	~Devise();
private: 
	double valeur;
};
