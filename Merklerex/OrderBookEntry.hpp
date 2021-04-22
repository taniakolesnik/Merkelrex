//
//  OrderBookEntry.hpp
//  Merklerex
//
//  Created by Tania Kolesnik on 21/04/2021.
//

#pragma once
#ifndef OrderBookEntry_hpp
#define OrderBookEntry_hpp
#include <string>
#include <stdio.h>

#endif /* OrderBookEntry_hpp */

enum class OrderBookType {bid, ask};
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
                   OrderBookType orderType);
};
