#pragma once
#include"Festival.h"
#include<string>
using namespace std;
class Concert: public Festival
{
private:
	string nume_cantaret;
public:
	Concert();
	Concert(string nume_cantaret, string data, string loc, int nr_locDisp, int nr_locOcup);
	Concert(string ags, char delim);
	void setNume(string nume);
	string getNume();
	friend ostream& operator<<(ostream& os, Concert a);
	string  tosString(char sep);
	~Concert();
};

