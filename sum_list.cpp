// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on June 14, 2021
// Calculates the sum of any user input

#include <iostream>
#include <string>
#include <list>

int sum_list(std::list <int> number_list) {
    int sum;
    sum = 0;
    for (int valid_input : number_list) {
        sum = sum + valid_input;
    }
    return sum;
}

main() {
    std::string user_input;
    std::list <int> number_list;
    int valid_input, final_sum;
    std::cout << "Enter one number at a time, enter 'STOP' to stop\n";
    while (true) {
        std::cout << "Enter your number: ";
        std::cin >> user_input;
        try {
            valid_input = std::stoi(user_input);
            number_list.push_back(valid_input);
        } catch (std::invalid_argument) {
            if (user_input == "STOP") {
                std::cout << "Stopped successfully\n";
                break;
            } else {
                std::cout << user_input << " is not a valid input\n";
                break;
            }
        }
    }
    sum_list(number_list);
    final_sum = sum_list(number_list);
    std::cout << final_sum << " is the sum of your numbers";
    std::cout << "\nDone.";
}
