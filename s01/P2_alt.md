# S01-P2-ALT

Consider the following code :

```cpp
#include <iostream>
using std::cout, std::endl;

class BankAccount {
    double balance;
    double interestRate;

public:
    BankAccount(double bal, double rate) {
        balance = bal;
        interestRate = rate;
    }
    void transfer(BankAccount other, double amount) {
        other.balance += amount;
        balance -= amount;
    }
};

int main() {
    BankAccount checking;
    BankAccount savings;
    checking.transfer(savings, 100);
}
```

There are two problems with the code, one preventing compilation and another one which prevents the code to behave as expected.
Find them, and correct the code.

# Ideas for follow-up discussion

1. What should we implement to be sure that the transfer is done only when there is enough balance to complete it ?
2. How would you implement a `displayBalance` method that prints the balance and interest rate of the `BankAccount` object in the console ?
3. How would you change the constructor to use an initialization section rather than its current implementation.
4. What happen if we forgot to add `private` before defining the base constructor ?

