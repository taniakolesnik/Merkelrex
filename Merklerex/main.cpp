//
//  main.cpp
//  Merklerex
//
//  Created by Tania Kolesnik on 15/04/2021.
//

#include <iostream>

int main(){
    
    while (true) {

    // 1. print help
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
    
    // ask user to choose oprion:
    std::cout << "====================" << std::endl;
    std::cout << "Type in 1-6:" << std::endl;
    
    // read user reply
    int userOption;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    
    // check reply
    switch (userOption){
        case 1:
            std::cout << "Help - choose options from the menu" << std::endl;
            std::cout << "and follow the on screen instructions." << std::endl;
            break;
        case 2:
            std::cout << "Market looks good" << std::endl;
            break;
        case 3:
            std::cout << "Make an offer for ..." << std::endl;
            break;
        case 4:
            std::cout << "Make an bid for XXXX enter the amount:" << std::endl;
            break;
        case 5:
            std::cout << "Your wallet: " << std::endl;
            break;
        case 6:
            std::cout << "Continue" << std::endl;
            break;
        default: std::cout << "Invalid choice. Choose betwen 1 to 6 and press Enter: " << std::endl; // bad intput
    }
    }
    return 0;
    
}
