#pragma once
#include <string>

#include "Card.h"

using namespace std;

class DeckOfCards {
private: int cards;
		 Card *cardPtr = NULL;  
public: DeckOfCards();
		~DeckOfCards();
		DeckOfCards reset();  
		void shuffle();
		Card draw();  
		Card peek(); 
		int numberOfCards();
};


