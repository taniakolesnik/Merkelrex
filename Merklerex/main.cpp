//
//  main.cpp
//  Merklerex
//
//  Created by Tania Kolesnik on 15/04/2021.
//

#include "OrderBookEntry.hpp"
#include "MerkelMain.hpp"

//TODO: fix 0 and chars input

int main(){
    
    MerkelMain app{};
    
    app.setMenu();
    
    while (true) {
        // 1. print help
        app.printMenu();
        // read user reply
        int userOption =  app.getUserOption();
        // check reply
        app.processUserOption(userOption);
    }
    return 0;
}

