#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account
{
private:
    double balance;
public:
    void set_balance(double bal)
    {
        balance = bal;
    }
    double get_balance()
    {
        return balance;
    }
};

#endif //_ACCOUNT_H_