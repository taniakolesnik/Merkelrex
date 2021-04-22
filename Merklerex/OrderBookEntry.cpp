//
//  OrderBookEntry.cpp
//  Merklerex
//
//  Created by Tania Kolesnik on 21/04/2021.
//

#include "OrderBookEntry.hpp"

OrderBookEntry::OrderBookEntry(double price,
                               double ammount,
                               std::string timestamp,
                               std::string product,
                               OrderBookType orderType)
: price(price),
ammount(ammount),
timestamp(timestamp),
product(product),
orderType(orderType){};
;
