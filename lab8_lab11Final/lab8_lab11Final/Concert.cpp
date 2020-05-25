#include "Concert.h"
#include<string>
#include<sstream>
#include<vector>

Concert::Concert()
{
	this->nume_cantaret = "";
}

Concert::Concert(string nume_cantaret, string data, string loc, int nr_locDisp, int nr_locOcup) : Festival(data, loc,nr_locDisp,nr_locOcup)
{
	this->nume_cantaret = nume_cantaret;
}
//Concert(string nume_cantaret, string data, string loc, int nr_locDisp, int nr_locOcup);
Concert::Concert(string ags, char delim)
{

	vector<string>result;
	stringstream ss(ags);
	string item;
	while (getline(ss, item, delim))
	{
		result.push_back(item);
	}

	vector<string> v = result;
	this->nume_cantaret = v[0];
	
	this->data = v[1];
	this->locatie = v[ 2];
	this->loc_libere = stoi(v[3]);
	this->loc_ocupate = stoi(v[ 4]);
}

void Concert::setNume(string nume)
{
	this->nume_cantaret = nume;
}

string Concert::getNume()
{
	return this->nume_cantaret;
}


string Concert::tosString(char sep)
{
	return this->nume_cantaret + sep + this->data + sep + this->locatie + sep + to_string(this->loc_libere) + sep + to_string(this->loc_ocupate);
}

Concert::~Concert()
{
}

ostream & operator<<(ostream & os, Concert a)
{
	os << a.nume_cantaret << " " << a.data << " " << a.locatie << " " << a.loc_libere << " " << a.loc_ocupate << endl;
	return os;
}
