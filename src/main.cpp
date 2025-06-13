/*
 * Bank_System - A C++ Banking System
 * Copyright (C) 2025 Uchiteleiden
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <limits>

bool validateLoginCredentials(std::string accountNumber, int passcode);

int main(){
    std::string accountNumber = "NULL";
    int passcode = 0;
    bool isLoginSuccessful = false;

    do{
        std::cout << "\n --- LOGIN --- \n";
        std::cout << "Type 'exit' in username to exit the program.\n";
        std::cout << "Username: ";
        std::cin >> accountNumber;
        
        if(accountNumber == "exit"){
            std::cout << "Thanks for using the program!\n";
            return 0;
        }

        std::cout << "Passcode: ";
        std::cin >> passcode;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if(validateLoginCredentials(accountNumber, passcode)){
            std::cout << "Login successful!\n";
            isLoginSuccessful = true;
            break;
        }

        std::cout << "no account found.\n";
    }while(!isLoginSuccessful);

    
    return 0;
}

bool validateLoginCredentials(std::string accountNumber, int passcode){
    return false;
}