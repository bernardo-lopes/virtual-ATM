//
// Created by BERNARDO LOPES on 22/02/2022.
//
#include "atm.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    int choice = 0;
    int inputPin;
    long int inputAccount_n;

    system("cls"); // cleans terminal

    // create a default user (object)
    atm user0;
    user0.setData(1234567, "Bernardo Lopes", 1111, 9999.99, "916789054");

    do
    {
        // system("cls"); // cleans terminal
        cout << endl << "------- ATM -------" << endl;

        // asks user account number
        cout << endl << "Enter account number:";
        cin >> inputAccount_n;
        // asks user PIN
        cout << endl << "Enter PIN:";
        cin >> inputPin;

        // check if it matches
        if ((inputAccount_n == user0.getAccount_n()) && (inputPin == user0.getPin()))
        {
            do
            {
                int amount = 0;
                int input_old_pin, input_new_pin, option;
                //Interface
                cout << endl << "------- ATM -------" << endl;
                cout << endl << "Select option";
                cout << endl << "1. Check balance";
                cout << endl << "2. Cash withdraw";
                cout << endl << "3. Show user details";
                cout << endl << "4. Change PIN";
                cout << endl << "0. Exit" << endl;
                cin >> option;

                switch (option) 
                {
                    case 1:
                        cout << endl << "Current balance: $" << user0.getBalance() << endl;
                        _getch(); // holds screen until the user press a key
                        break;
                    case 2:
                        cout << endl << "Insert amount: " << endl;
                        cin >> amount;
                        user0.cashWithdraw(amount);
                        break;
                    case 3:
                        cout << endl << ".Name:            " << user0.getName();
                        cout << endl << ".Account number:  " << user0.getAccount_n();
                        cout << endl << ".Mobile number:   " << user0.getMobile_n();
                        cout << endl << ".Current balance: " << user0.getBalance();
                        cout << endl << ".PIN: " << user0.getPin();
                        _getch(); // holds screen until the user press a key
                        break;
                    case 4:
                        // asks user for the old PIN
                        cout << endl << "Insert current PIN:" << endl;
                        cin >> input_old_pin;
                        // asks user for a new PIN
                        cout << endl << "Insert a new PIN:" << endl;
                        cin >> input_new_pin;
                        user0.setPin(input_old_pin, input_new_pin);
                        break;
                    case 0:
                        exit(0);
                        // handles invalid inputs
                    default:
                        cout << endl << "Enter a valid input";
                        _getch(); // holds screen until the user press a key
                }
            } while (1);
        }
        else
        {
            cout << endl << "Wrong credentials" << endl;
        }
    } while (1);
}
