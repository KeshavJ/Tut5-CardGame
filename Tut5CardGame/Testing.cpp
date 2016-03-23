#include <iostream>
#include <string>
#include <cmath>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
	Card card;
	card.setCard("red", 2);
	card.colour();
	card.number();
	card.print();

	
	DeckOfCards *deck = new DeckOfCards(); 
	cout << endl;
	cout << "Cards Remaining: " << deck->numberOfCards() << endl;

	deck->peek();
	cout << endl;
	deck->shuffle();
	cout << endl;
	deck->draw();
	cout << "Cards Remaining: " << deck->numberOfCards() << endl;
	cout << endl;

	cout << "Resetting Deck" << endl;
	deck->reset();
	cout << endl;
	cout << "Cards Remaining " << deck->numberOfCards();
	cout << endl;
	cout << "Drawing all cards " << endl;
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		deck->draw();
		cout << "Cards Remaining: " << deck->numberOfCards() << endl;
	}

	delete deck;
	return 0;
}