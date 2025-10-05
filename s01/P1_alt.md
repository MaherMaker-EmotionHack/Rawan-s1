# S01-P1-ALT

Consider the following code :

```cpp
#include <iostream>
using std::cout, std::endl;


class Recipe {
    double cookingTime;
    double temperature;

public:
    void setParameters(double time, double temp) {
        cookingTime = time;
    }
    double totalEnergy() {
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

There are two problems with the code, one preventing compilation and another one which prevents the code to behave as expected.
Find them, and correct the code **without removing anything**.

# Ideas for follow-up discussion

1. What if instead of a method, we implement a `print` function that does the same thing ? How would you do that ?
2. Same question as before, but for `setParameters` ...
3. How would you implement a `requiresMoreTime` method that compare if the `Recipe` takes longer cooking time than another ?
4. [Tricky] What happens if we don't call the `setParameters` method before `print` ? Can you explain why ?

