#ifndef _CARDS_H
#define _CARDS_H
#include <iostream>

enum CardRank {
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_9,
    RANK_10,
    RANK_JACK,
    RANK_QUEEN,
    RANK_ACE,
    MAX_RANKS
};

enum CardSuit {
    SUIT_CLUBS,
    SUIT_DIAMONDS,
    SUIT_HEARTS,
    SUIT_SPADES,
    MAX_SUITS
};

struct Card {
    CardRank rank;
    CardSuit suit;
    
};

void printCard(const &card);


#endif
