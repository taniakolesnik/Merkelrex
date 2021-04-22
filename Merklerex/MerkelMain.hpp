//
//  MerkelMain.hpp
//  Merklerex
//
//  Created by Tania Kolesnik on 22/04/2021.
//

#ifndef MerkelMain_hpp
#define MerkelMain_hpp

#include <stdio.h>
#include <string>
#include <map>


#endif /* MerkelMain_hpp */

extern std::map<int,std::pair<void(*)(),std::string>> menu;

class MerkelMain{
    
public:
    MerkelMain();
    /**call this to start the sim */
    static void init() ;
    
private:
    
    // menu, request, proceed reply
    static void setMenu() ;
    static void printMenu();
    static int getUserOption();
    static void processUserOption(int userOption);
    static void loadOrderBook() ;
    // actions
    static void printHelp() ;
    static void printMarketStats() ;
    static void enterOffer() ;
    static void enterBid();
    static void printWallet() ;
    static void gotoNextTimeframe();
    //std::vector<OrderBookEntry> orders;
};
