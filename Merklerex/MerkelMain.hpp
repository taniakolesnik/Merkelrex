//
//  MerkelMain.hpp
//  Merklerex
//
//  Created by Tania Kolesnik on 22/04/2021.
//
#pragma once
#ifndef MerkelMain_hpp
#define MerkelMain_hpp

#include <stdio.h>
#include <vector>
#include "OrderBookEntry.hpp"

#endif /* MerkelMain_hpp */


class MerkelMain
{
public:
    MerkelMain() = default;
    /** Call this to start the sim */
    void init();
private:
    void loadOrderBook();
    void printMenu();
    void printHelp();
    void printMarketStats();
    void enterOffer();
    void enterBid();
    void printWallet();
    void gotoNextTimeframe();
    int getUserOption();
    void processUserOption(int userOption);
    std::vector<OrderBookEntry> orders;
};
