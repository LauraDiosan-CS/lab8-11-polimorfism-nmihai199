#include "Artist.h"



Artist::Artist()
{

	this->nume = "";
	
}


Artist::~Artist()
{
}

Artist::Artist(string n)
{

	this->nume = n;

}

Artist::Artist(const Artist & a)
{

	this->nume = a.nume;
	
}


string Artist::getNume()
{
	return this->nume;
}



void Artist::setNume(string n)
{
	this->nume = n;

}



ostream & operator<<(ostream & os, Artist a)
{
	os << a.nume << " " << endl;
	return os;
}


