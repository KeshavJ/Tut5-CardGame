#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

Card::Card()
{
	Ccolour = "black";  
	Cnumber = 1;
}

void Card::setCard(string colour, int number)
{
	
	if (((colour != "red") && (colour != "black")) && ((number < 0) || (number > 10)))
	{
		cout << "Invalid input. Please enter correct colour (red or black) and correct number (between 1 - 10)" << endl;
		cin >> Ccolour >> Cnumber;
	}

	else if ((number <= 0) || (number > 10))
	{
		cout << "Invalid input for the card number. Please enter numbers between 1 to 10" << endl;
		cin >> Cnumber;
		Ccolour = colour;
	}
	else if ((colour != "red") && (colour != "black"))
	{
		cout << "Invalid input for card colour. Please enter red or black " << endl;
		cin >> Ccolour;
		Cnumber = number;
	}

	else
	{
		Ccolour = colour;
		Cnumber = number;
	}

}

string Card::colour() {
	return Ccolour;
}

int Card::number() {
	return Cnumber;
}

void Card::print() {
	cout << Ccolour << " " << Cnumber << endl;
}

Card::~Card()
{
}
