// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on: April 12 2022
// This program figures out if you can date the grand child

///////////////////////////////////////////////////////////////
// LIBRARIES
///////////////////////////////////////////////////////////////
#include <iostream>

///////////////////////////////////////////////////////////////
// STD::SHORTCUTS
///////////////////////////////////////////////////////////////
using std::cout;
using std::cin;
using std::string;


int main() {
    // variables
    string userStr;
    int userInt, counter = 0, factorialNum;
    // inputs
    cout << "Enter the number you wanted to be factorialed: ";
    cin >> userStr;
    // try catch
    try {
        userInt = std::stoi(userStr);
    } catch (std::invalid_argument) {
        cout << "You have to input an integer greater than 0\n";
        main();
    }
    // check if lower than 0
    if (userInt < 0) {
        cout << "You have to input an integer greater than 0\n";
        main();
    }
    do {
        ++counter;
        cout << counter << " times through loop \n";
        factorialNum = counter * factorialNum;
    } while (counter < userInt);
    cout << "Your number factorialed is " << factorialNum;
}
