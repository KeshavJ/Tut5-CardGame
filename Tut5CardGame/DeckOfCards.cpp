#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards()
{
	
	cards = 20; 
	cardPtr = new Card[cards];  
										
	for (int i = 0; i < 10; i++)
	{
		cardPtr[i].setCard("red", i + 1);
	}
	
	for (int i = 10; i < 20; i++)
	{
		cardPtr[i].setCard("black", (i + 1) - 10);
	}

}

DeckOfCards DeckOfCards::reset() {
	
	cards = 20; 
	return DeckOfCards(); 
}

void DeckOfCards::shuffle() {
	srand((unsigned)time(NULL));  
	Card temp;
	int r1 = 0; 
	int r2 = 0; 
	for (int i = 0; i < 50; i++)
	{
		r1 = rand() % 19;  
		r2 = rand() % 19; 
		if (r1 != r2)
		{
			temp = cardPtr[r1];
			cardPtr[r1] = cardPtr[r2];
			cardPtr[r2] = temp;
		}
		else
		{
			cout << "Error. Trying again" << endl;
		}
	}
	cout << "Shuffled cards:" << endl;
	for (int i = 0; i < 20; i++)
	{
		cardPtr[i].print();
	}

}

Card DeckOfCards::draw() {
	cout << "Drawing Card" << endl;
	cardPtr[cards - 1].print();
	cards--;  
	return cardPtr[cards];
	delete &cardPtr[cards];
}

Card DeckOfCards::peek() {
	cout << "Peeking at Card" << endl;
	cardPtr[cards - 1].print();  
	return cardPtr[cards - 1];
}

int DeckOfCards::numberOfCards() {
	return cards;
}

DeckOfCards::~DeckOfCards()
{
	delete[] cardPtr;
}
