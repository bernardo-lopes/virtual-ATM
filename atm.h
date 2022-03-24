//
// Created by BERNARDO LOPES on 22/02/2022.
//

#ifndef MAIN_CPP_ATM_H
#define MAIN_CPP_ATM_H
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

class atm
{
private:
    long int Account_n;
    string Name;
    int Pin;
    double Balance;
    string Mobile_n;
public:
    void setData(long int account_n, string name, int pin, double balance, string mobile_n);

    long int getAccount_n();

    string getName();

    int getPin();

    double getBalance();

    string getMobile_n();

    void setPin(int old_pin, int new_pin);

    // Withdraw money from the ATM
    void cashWithdraw (int amount);
};


#endif //MAIN_CPP_ATM_H
