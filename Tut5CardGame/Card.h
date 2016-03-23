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
	void setCard(string, int);
	~Card();
	string colour();
	int number();
	void print();
};

