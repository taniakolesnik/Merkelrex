//
//  MerkelMain.cpp
//  Merklerex
//
//  Created by Tania Kolesnik on 22/04/2021.
//

#include "MerkelMain.hpp"
#include <iostream>
#include <string>
#include "CSVReader.hpp"

std::vector<OrderBookEntry> orders;

void MerkelMain::init() {
    loadOrderBook();
    int input;
    while (true) {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
}

void MerkelMain::loadOrderBook() {
    orders = CSVReader::readCSV("/Users/tania/Documents/UoL/OOP/Merklerex/Merklerex/20200317.csv");
    
}

void MerkelMain::printMenu() {
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid"<< std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
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
    std::cout << "OrderBook contains:" << std::endl;
    for (OrderBookEntry order : orders){
        std::cout << "price: " << order.price << std::endl;
    }
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
    if (userOption == 1){
        MerkelMain::printHelp();
    }
    else if (userOption == 2){
        MerkelMain::printMarketStats();
    }
    else if (userOption == 3){
        MerkelMain::enterOffer();
    }
    else if (userOption == 4){
        MerkelMain::enterBid();
    }
    else if (userOption == 5){
        MerkelMain::printWallet();
    }
    else if (userOption == 6){
        MerkelMain::gotoNextTimeframe();
    }
    else {
        std::cout << "Invalid choice. Choose 1-6:" << std::endl; // bad intput
    }
    std::cout << "====================" << std::endl;
}

