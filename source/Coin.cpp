//----------------------------------------------------------------------
// Coin.cpp : Coin class definition
// 
// Author: Prof. Linda C
//----------------------------------------------------------------------
#include <cstdlib>      // rand()
#include <string>
#include <vector>

#include "Coin.h"

using std::rand;
using std::string;
using std::vector;

//----------------------------------------------------------------------
// default constructor : sets initial coin state
//----------------------------------------------------------------------
Coin::Coin() {
    toss();

    // don't count initial coin state as a toss
    headsCount = tailsCount = 0;
}

//----------------------------------------------------------------------
// - simulate coin toss with random 0 (HEADS) or 1 (TAILS)
// - set current toss result in sideUp member
// - track toss result in vector member
//----------------------------------------------------------------------
void Coin::toss() {
    if (rand() % 2 == HEADS) {
        sideUp = "heads";
        headsCount++;
    }
    else {
        sideUp = "tails";
        tailsCount++;
    }
}

//----------------------------------------------------------------------
// return last toss results
//----------------------------------------------------------------------
string Coin::getSideUp() { return sideUp; }

//----------------------------------------------------------------------
// return number of heads tossed
//----------------------------------------------------------------------
int Coin::getHeadsCount() { return headsCount; }

//----------------------------------------------------------------------
// return number of tails tossed
//----------------------------------------------------------------------
int Coin::getTailsCount() { return tailsCount; }
