//
// Created by BERNARDO LOPES on 22/02/2022.
//
#include <string>
#include <iostream>
#include <conio.h>
#include "atm.h"
using namespace std;

void atm::setData(long int account_n, string name, int pin, double balance, string mobile_n)
{
    Account_n = account_n;
    Name = name;
    Pin = pin;
    Balance = balance;
    Mobile_n = mobile_n;
}

long int atm::getAccount_n()
{
    return Account_n;
}

string atm::getName()
{
    return Name;
}

int atm::getPin()
{
    return Pin;
}

double atm::getBalance()
{
    return Balance;
}

string atm::getMobile_n()
{
    return Mobile_n;
}

void atm::setPin(int old_pin, int new_pin)
{
    if (old_pin == Pin)
    {
        Pin = new_pin;
        cout << endl << "Successfully updated PIN" << endl;
        _getch(); // holds screen until the user press a key
    } else
    {
        cout << endl << "Wrong PIN" << endl;
        _getch(); // holds screen until the user press a key
    }
}

// Withdraw money from the ATM
void atm::cashWithdraw (int amount)
{
    if (amount > 0 && amount < Balance)
    {
        Balance -= amount;
        cout << endl << "Please collect your cash" << endl;
        cout << endl << "Current balance: $" << Balance << endl;
        _getch(); // holds screen until the user press a key
    }
    else
    {
        cout << endl << "Insufficient balance" << endl;
        cout << endl << "Current balance: $" << Balance << endl;
        _getch(); // holds screen until the user press a key
    }
}

