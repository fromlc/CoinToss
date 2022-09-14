//----------------------------------------------------------------------
// Coin.h : Coin class declaration and definition
//----------------------------------------------------------------------
#pragma once

#include <string>
#include <vector>

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
    
    // private coin toss only
    void _toss();

public:
    // default constructor
    Coin();
    // simulate coin toss with random 0 (HEADS) or 1 (TAILS)
    void toss();
    // return last toss results
    string getSideUp();
    // return number of heads tossed
    int getHeadsCount();
    // return number of tails tossed
    int getTailsCount();
    // return result for a specific toss number
    string getTossResult(int tossNumber);
};
