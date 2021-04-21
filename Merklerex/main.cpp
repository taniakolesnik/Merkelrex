//
//  main.cpp
//  Merklerex
//
//  Created by Tania Kolesnik on 15/04/2021.
//

#include <iostream>
#include <map>
#include <string>

std::map<int,std::pair<void(*)(),std::string>> menu;
enum class OrderBookType {bid, ask};

//prototypes
static void printMenu();
static int getUserOption();
static void setMenu();
static void processUserOption(int);

class OrderBookEntry{
    
public:
    double price;
    double ammount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
    
    OrderBookEntry(double price,
                   double ammount,
                   std::string timestamp,
                   std::string product,
                   OrderBookType orderType){
       this->price = price;
       this->ammount = ammount;
       this->timestamp = timestamp;
       this->product = product;
       this->orderType = orderType;
    };
    
};


int main(){

    OrderBookEntry orderOne{1000,1000,"test","test",OrderBookType::ask};
    std::cout << "price is " << orderOne.price << std::endl;
//    setMenu();
//
//    while (true) {
//    // 1. print help
//        printMenu();
//    // read user reply
//        int userOption = getUserOption();
//    // check reply
//        processUserOption(userOption);
//    }
    return 0;
}



static void printMenu() {
    for (int i=1; i<=menu.size(); i++) {
        std::cout << menu[i].second << std::endl;
    }
}

static int getUserOption() {
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
    // if menu is changed in main function this functions is not affected.
    if (userOption >= 0 && userOption<= menu.size()){
        menu[userOption].first();
    } else {
        std::cout << "Invalid choice. Choose 1-6:" << std::endl; // bad intput
    }
    std::cout << "====================" << std::endl;
}

static void setMenu() {
    menu[1]=std::make_pair(printHelp, std::string("1: Print help"));
    menu[2]=std::make_pair(printMarketStats, std::string("2: Print exchange stats"));
    menu[3]=std::make_pair(enterAsk, std::string("3: Place an ask"));
    menu[4]=std::make_pair(enterBid, std::string("4: Place a bid"));
    menu[5]=std::make_pair(printWallet, std::string("5: Print wallet"));
    menu[6]=std::make_pair(gotoNextTimeframe, std::string("6: Continue"));
}

