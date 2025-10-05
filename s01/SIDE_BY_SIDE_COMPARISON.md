# Side-by-Side Comparison: Original vs Alternative Exercises

## Problem 1 Comparison

### Original (P1.md) - Rectangle Theme
```cpp
class Rectangle {
    double height;
    double width;

public:
    void changeDimensions(double h, double w) {
        height = h;  // Bug: width not set
    }
    double surface() {  // Bug: not const
        return height*width;
    }
    void print() const {
        cout << "Rectangle[" << width << "x" << height 
             << "], surface=" << surface() << endl;
    }
};

int main() {
    Rectangle r1;
    r1.changeDimensions(4, 12);
    r1.print();
}
```

### Alternative (P1_alt.md) - Recipe Theme
```cpp
class Recipe {
    double cookingTime;
    double temperature;

public:
    void setParameters(double time, double temp) {
        cookingTime = time;  // Bug: temperature not set
    }
    double totalEnergy() {  // Bug: not const
        return cookingTime*temperature;
    }
    void print() const {
        cout << "Recipe[" << temperature << "°C for " << cookingTime 
             << "min], energy=" << totalEnergy() << endl;
    }
};

int main() {
    Recipe cake;
    cake.setParameters(45, 180);
    cake.print();
}
```

**Same Bugs:**
1. Method called by const function is not declared const
2. Setter only assigns one of two parameters

---

## Problem 2 Comparison

### Original (P2.md) - Mage Theme
```cpp
class Mage {
    int hitPoints;
    double mana;

public:
    Mage(int hp, double m) {
        hitPoints = hp;
        mana = m;
    }
    void attack(Mage other) {  // Bug: pass by value
        other.hitPoints -= 1;
        mana -= 10;
    }
};

int main() {
    Mage gandalf;  // Bug: missing constructor args
    Mage saruman;  // Bug: missing constructor args
    saruman.attack(gandalf);
}
```

### Alternative (P2_alt.md) - Bank Account Theme
```cpp
class BankAccount {
    double balance;
    double interestRate;

public:
    BankAccount(double bal, double rate) {
        balance = bal;
        interestRate = rate;
    }
    void transfer(BankAccount other, double amount) {  // Bug: pass by value
        other.balance += amount;
        balance -= amount;
    }
};

int main() {
    BankAccount checking;  // Bug: missing constructor args
    BankAccount savings;   // Bug: missing constructor args
    checking.transfer(savings, 100);
}
```

**Same Bugs:**
1. Constructor requires arguments but none provided in main()
2. Parameter passed by value instead of by reference

---

## Programming Task Comparison

### Original (README.md + program.cpp) - Battle Theme

**Class:** `Unit`
**Input file:** `battlefield.txt`
**Example:**
```
[Units]
orcs 2 3
elves 0 1
[Moves]
orcs S
elves N
[Moves]
orcs W
elves E
```

**Output:**
```
Battle starts :
Unit-orcs is at (2,3)
Unit-elves is at (0,1)
After 2 moves :
Unit-orcs is at (1,2)
Unit-elves is at (1,2)
```

**Methods to implement:**
- Constructor: `Unit(int x0, int y0, const string& n)`
- `void printPosition() const`
- `bool is(const string& n) const`
- `void move(const string& dir)`

### Alternative (README_alt.md + program_alt.cpp) - Treasure Hunt Theme

**Class:** `Explorer`
**Input file:** `treasuremap.txt`
**Example:**
```
[Explorers]
alice 1 3
bob 4 2
[Moves]
alice E
bob W
[Moves]
alice N
bob S
```

**Output:**
```
Hunt begins :
Explorer-alice is at (1,3)
Explorer-bob is at (4,2)
After 2 moves :
Explorer-alice is at (2,4)
Explorer-bob is at (3,1)
```

**Methods to implement:**
- Constructor: `Explorer(int x0, int y0, const string& n)`
- `void printPosition() const`
- `bool is(const string& n) const`
- `void move(const string& dir)`

---

## Key Similarities

Both exercise sets have:
- **Same structure**: 2 problem exercises + 1 programming task
- **Same difficulty**: Identical complexity and concepts
- **Same bugs**: Matching error types requiring same fixes
- **Same methods**: Identical signatures and behavior
- **Same stages**: Two-stage implementation process
- **Same concepts**: Classes, constructors, methods, file I/O

## Key Differences

Only the **themes** are different:
- Original: Geometry/Fantasy/Warfare
- Alternative: Cooking/Finance/Adventure

This makes them perfect for:
- Makeup assignments
- Additional practice
- Preventing plagiarism
- Semester rotation
