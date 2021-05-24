// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Sun/May23/2021
// This program is a fahrenheit program


#include <iostream>


int fahrenheit() {
    // this function lets you enter in a temperature in degrees celsius
    // prints out what that temperature is in degrees Fahrenheit
    std::string Tc;
    float TcInt;
    float Tf;
    // input
    std::cout << "Enter the temperature in degrees celsius(℃):";
    std::cin >> Tc;
    // process & output
    try {
        TcInt = std::stoi(Tc);

        Tf = (TcInt * 9/5) + 32;
        std::cout <<
        "\nThe temperature in degrees Fahrenheit is :" << Tf << "℉"<< std::endl;
        std::cout << "\nDone." << std::endl;
    }catch (std::invalid_argument) {
       std::cout << "\nInvalid Input" << std::endl;
       std::cout << "\nDone." << std::endl;
    }
}

int main() {
    // this function just calls other functions

    // call functions
    fahrenheit();
}
