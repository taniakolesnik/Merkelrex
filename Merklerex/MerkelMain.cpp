//
//  MerkelMain.cpp
//  Merklerex
//
//  Created by Tania Kolesnik on 22/04/2021.
//

#include "MerkelMain.hpp"
#include <iostream>
#include <map>
#include <string>

std::map<int,std::pair<void(*)(),std::string>> menu;

MerkelMain::MerkelMain(){};

void MerkelMain::printMenu() {
    for (int i=1; i<=menu.size(); i++) {
        std::cout << menu[i].second << std::endl;
    }
}

int MerkelMain::getUserOption() {
    std::cout << "Type in 1-6:" << std::endl;
    int userOption;
    std::cin >> userOption;
    std::cout << "====================" << std::endl;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void MerkelMain::printHelp() {
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

void MerkelMain::printMarketStats() {
    std::cout << "Market looks good" << std::endl;
}

void MerkelMain::enterOffer() {
    std::cout << "Make an offer for ..." << std::endl;
}

void MerkelMain::enterBid() {
    std::cout << "Make an bid for XXXX enter the amount:" << std::endl;
}

void MerkelMain::printWallet() {
    std::cout << "Your wallet: " << std::endl;
}

void MerkelMain::gotoNextTimeframe() {
    std::cout << "Continue" << std::endl;
}

void MerkelMain::processUserOption(int userOption) {
    // if menu is changed in main function this functions is not affected.
    if (userOption >= 0 && userOption<= menu.size()){
        menu[userOption].first();
    } else {
        std::cout << "Invalid choice. Choose 1-6:" << std::endl; // bad intput
    }
    std::cout << "====================" << std::endl;
}

void MerkelMain::setMenu() {
    menu[1] = std::make_pair(MerkelMain::printHelp, std::string("1: Print help"));
    menu[2] = std::make_pair(MerkelMain::printMarketStats, std::string("2: Print exchange stats"));
    menu[3] = std::make_pair(MerkelMain::enterOffer, std::string("3: Place an ask"));
    menu[4] = std::make_pair(MerkelMain::enterBid, std::string("4: Place a bid"));
    menu[5] = std::make_pair(MerkelMain::printWallet, std::string("5: Print wallet"));
    menu[6] = std::make_pair(MerkelMain::gotoNextTimeframe, std::string("6: Continue"));
}


