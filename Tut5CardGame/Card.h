#pragma once
#include <string>

using namespace std;
class Card
{
private: 
	string Ccolour;
	int Cnumber;
public:
	Card();
	~Card();
	void setCard(string, int);
	string colour();
	int number();
	void print();
};

