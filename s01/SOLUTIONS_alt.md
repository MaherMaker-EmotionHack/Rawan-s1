# Solutions for Alternative Problems

## P1_alt - Recipe Problem

### Issues:
1. **Compilation error**: `print()` is declared `const` but calls `totalEnergy()` which is not `const`. Solution: Add `const` to `totalEnergy()`.
2. **Logic error**: `setParameters()` only sets `cookingTime` but not `temperature`. Solution: Add `temperature = temp;` to the method.

### Corrected code:
```cpp
#include <iostream>
using std::cout, std::endl;

class Recipe {
    double cookingTime;
    double temperature;

public:
    void setParameters(double time, double temp) {
        cookingTime = time;
        temperature = temp;  // FIX: was missing
    }
    double totalEnergy() const {  // FIX: added const
        return cookingTime*temperature;
    }
    void print() const {
        cout << "Recipe[" << temperature << "°C for " << cookingTime << "min], energy=" << totalEnergy() << endl;
    }
};

int main() {
    Recipe cake;
    cake.setParameters(45, 180);
    cake.print();
}
```

## P2_alt - BankAccount Problem

### Issues:
1. **Compilation error**: Constructor requires arguments but none are provided in `main()`. Solution: Add arguments when creating objects, e.g., `BankAccount checking(500, 0.02);`
2. **Logic error**: `transfer()` passes `other` by value, so changes to `other.balance` don't affect the actual object. Solution: Pass by reference using `BankAccount& other`.

### Corrected code:
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
    void transfer(BankAccount& other, double amount) {  // FIX: added & for reference
        other.balance += amount;
        balance -= amount;
    }
};

int main() {
    BankAccount checking(500, 0.02);  // FIX: added constructor arguments
    BankAccount savings(1000, 0.03);  // FIX: added constructor arguments
    checking.transfer(savings, 100);
}
```
