//----------------------------------------------------------------------
// Coin.cpp : Coin class definition
// 
// Author: Prof. Linda C
//----------------------------------------------------------------------
#include <cassert>     
#include <cstdlib>      // srand(), rand()
#include <string>
#include <ctime>
#include <vector>

#include "Coin.h"

// uncomment to disable assert()
//#define NDEBUG

using std::rand;
using std::string;
using std::vector;

//----------------------------------------------------------------------
// default constructor : sets initial coin state
//----------------------------------------------------------------------
Coin::Coin() {
    srand((unsigned int) time(0));

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

    tossHistory.push_back(sideUp);
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

//------------------------------------------------------------------
// return result for a specific toss number
//------------------------------------------------------------------
string Coin::getTossResult(int tossNumber) {
    assert(tossNumber > 0);
    assert(tossNumber < tossHistory.size());

    return tossHistory.at(tossNumber - 1);
}

