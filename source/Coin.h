//----------------------------------------------------------------------
// Coin.h : Coin class declaration and definition
//----------------------------------------------------------------------
#pragma once

#include <cassert>
#include <cstdlib>      // rand()
#include <string>
#include <vector>

using std::rand;
using std::string;
using std::vector;

//----------------------------------------------------------------------
// constants
//----------------------------------------------------------------------
constexpr int HEADS = 0;
constexpr int TAILS = 1;

//----------------------------------------------------------------------
// Coin
//----------------------------------------------------------------------
class Coin {
private:
    string sideUp;
    int headsCount, tailsCount;
    vector<string> tossHistory;

public:
    //------------------------------------------------------------------
    // default constructor : sets initial Coin state
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
        // track toss results in vector
        tossHistory.push_back(sideUp);
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

    //------------------------------------------------------------------
    // return result number of tails tossed
    //------------------------------------------------------------------
    string getTossResult(int tossNumber) { 
        assert(tossNumber > 0);
        assert(tossNumber < tossHistory.size());

        return tossHistory.at(tossNumber - 1); }
};

