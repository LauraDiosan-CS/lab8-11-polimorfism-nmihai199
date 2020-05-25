#include<iostream>
#include<string>
using namespace std;
#pragma once
class Artist
{
private:
	
	string nume;
	
public:

	Artist();
	~Artist();
	Artist(string n);
	Artist(const Artist &a);
	string  getNume();
	void setNume(string n);
	friend ostream& operator<<(ostream& os, Artist a);


};

