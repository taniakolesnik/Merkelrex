//
//  main.cpp
//  Merklerex
//
//  Created by Tania Kolesnik on 15/04/2021.
//

#include <iostream>
#include <map>

std::map<int,void(*)()> menu;

static void printMenu() {
    std::cout << "1: Print help" << std::endl;
    // 2. print exchange stats
    std::cout << "2: Print exchange stats" << std::endl;
    // 3. make and offer
    std::cout << "3: Place an ask" << std::endl;
    // 4. make a bid
    std::cout << "4: Place a bid" << std::endl;
    // 5. print wallet
    std::cout << "5: Print wallet" << std::endl;
    // 6. continue
    std::cout << "6: Continue" << std::endl;
    
}

static int getUserOption() {
    // ask user to choose oprion:
    // std::cout << "====================" << std::endl;
    std::cout << "Type in 1-6:" << std::endl;
    
    int userOption;
    std::cin >> userOption;
    std::cout << "====================" << std::endl;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

static void printHelp() {
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

static void printMarketStats() {
    std::cout << "Market looks good" << std::endl;
}

static void enterAsk() {
     std::cout << "Make an offer for ..." << std::endl;
}

static void enterBid() {
    std::cout << "Make an bid for XXXX enter the amount:" << std::endl;
}

static void printWallet() {
    std::cout << "Your wallet: " << std::endl;
}

static void gotoNextTimeframe() {
    std::cout << "Continue" << std::endl;
}

static void processUserOption(int userOption) {
    if (userOption > 0 && userOption<= menu.size()){
        menu[userOption]();
    } else {
        std::cout << "Invalid choice. Choose 1-6:" << std::endl; // bad intput
    }
    std::cout << "====================" << std::endl;
}

int main(){
    
    //set options
    menu[1] = printHelp;
    menu[2] = printMarketStats;
    menu[3] = enterAsk;
    menu[4] = enterBid;
    menu[5] = printWallet;
    menu[6] = gotoNextTimeframe;
    
    while (true) {
        
    // 1. print help
        printMenu();
    // read user reply
        int userOption = getUserOption();
    // check reply
        processUserOption(userOption);
    }
    return 0;
}
