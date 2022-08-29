//----------------------------------------------------------------------
// Coin.h : Coin class declaration and definition
//----------------------------------------------------------------------
#pragma once

#include <cstdlib>      // rand()
#include <string>
#include <vector>

// app
using std::cin;
using std::cout;

// class
using std::rand;
using std::string;
using std::vector;

//----------------------------------------------------------------------
// constants
//----------------------------------------------------------------------
constexpr int HEADS = 0;
constexpr int TAILS = 1;

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
class Coin {
private:
    string sideUp;
    int headsCount, tailsCount;
    vector<string> tossHistory;

public:
    //------------------------------------------------------------------
    // default constructor : sets initial coin state
    //------------------------------------------------------------------
    Coin() {
        toss();

        // don't count initial coin state as a toss
        headsCount = tailsCount = 0;
    }

    //------------------------------------------------------------------
    // - simulate coin toss with random 0 (HEADS) or 1 (TAILS)
    // - set current toss result in sideUp member
    // - track toss result in vector member
    //------------------------------------------------------------------
    void toss() {
        if (rand() % 2 == HEADS) {
            sideUp = "heads";
            headsCount++;
        }
        else {
            sideUp = "tails";
            tailsCount++;
        }
    }

    //------------------------------------------------------------------
    // return last toss results
    //------------------------------------------------------------------
    string getSideUp() { return sideUp; }

    //------------------------------------------------------------------
    // return number of heads tossed
    //------------------------------------------------------------------
    int getHeadsCount() { return headsCount; }

    //------------------------------------------------------------------
    // return number of tails tossed
    //------------------------------------------------------------------
    int getTailsCount() { return tailsCount; }
};

