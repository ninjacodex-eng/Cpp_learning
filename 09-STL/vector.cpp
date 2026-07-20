#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.setBalance(500.0);
    cout << "Balance: " << myAccount.getBalance() << endl;
    return 0;
}
