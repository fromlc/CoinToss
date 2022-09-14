//----------------------------------------------------------------------
// app.cpp : Coin toss game
//----------------------------------------------------------------------
#include <iostream>

// Coin class declaration and definition
#include "Coin.h"

using std::cin;
using std::cout;

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {
    cout << "\nWelcome to Coin Toss!\n\n";
    cout << "How many coin tosses? ";
    int tosses;
    cin >> tosses;

    // display initial coin state
    Coin suzyBuck;
    cout << "\nInitial side up: " << suzyBuck.getSideUp() << '\n';

    // simulate coin tosses and display results of each
    for (int i = 0; i < tosses; i++) {
        suzyBuck.toss();
        cout << "\nToss " << i+1 << ": " << suzyBuck.getSideUp();
    }
    cout << '\n';

    // display numbers of heads and tails tossed
    cout << "\nNumber of heads tossed: " << suzyBuck.getHeadsCount();
    cout << "\nNumber of tails tossed: " << suzyBuck.getTailsCount();

    // use the history vector
    cout << "\n\nFirst toss was: " << suzyBuck.getTossResult(1);

    cout << "\n\nGoodbye!\n";

    return 0;
}

