//
//  CSVReader.hpp
//  Merklerex
//
//  Created by Tania Kolesnik on 01/05/2021.
//
#pragma once
#ifndef CSVReader_hpp
#define CSVReader_hpp

#include "OrderBookEntry.hpp"
#include <stdio.h>
#include <vector>
#include <string>

#endif /* CSVReader_hpp */

class CSVReader{
public:
    CSVReader();
    static std::vector<OrderBookEntry> readCSV(std::string csvFilename);
private:
    static std::vector<std::string> tokenise(std::string csvLine, char separator);
    static OrderBookEntry stringsToOBE(std::vector<std::string> strings);
};
