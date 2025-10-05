# Alternative Homework Set - Usage Guide

This directory contains an alternative set of homework exercises that follow the same structure and difficulty level as the original S01 exercises, but with different themes as requested.

## Overview of Changes

### Problem 1: Cooking Theme (P1_alt.md)
- **Original**: Rectangle class with dimensions
- **Alternative**: Recipe class with cooking time and temperature
- **Same errors**: 
  1. Missing const on method called by const function
  2. Incomplete parameter assignment in setter method
- **Same difficulty level**: Basic class design and const correctness

### Problem 2: Bank Account Theme (P2_alt.md)
- **Original**: Mage class with attack functionality
- **Alternative**: BankAccount class with transfer functionality
- **Same errors**:
  1. Missing constructor arguments
  2. Pass-by-value instead of pass-by-reference
- **Same difficulty level**: Constructor usage and reference parameters

### Programming Task: Treasure Hunt Game (README_alt.md, program_alt.cpp)
- **Original**: Middle Earth battle with orcs and elves (Unit class)
- **Alternative**: Treasure hunt with explorers on an island (Explorer class)
- **Same structure**:
  - Reading from input file (treasuremap.txt instead of battlefield.txt)
  - Two entities moving on a 2D grid
  - Stage 1: Implement class with attributes, constructor, and print method
  - Stage 2: Implement movement and name checking methods
- **Same difficulty level**: File I/O, class implementation, and method design

## Files Included

1. **P1_alt.md** - Cooking-themed problem exercise
2. **P2_alt.md** - Bank account-themed problem exercise
3. **README_alt.md** - Complete instructions for the treasure hunt programming task
4. **program_alt.cpp** - Template file for students to implement
5. **treasuremap.txt** - Input file for the programming task
6. **reference_alt.cpp** - Reference solution showing correct implementation
7. **SOLUTIONS_alt.md** - Detailed explanations of problems and their solutions

## How to Use

### For Instructors

You can use these alternative exercises in several ways:

1. **As a complete replacement**: Replace the original set with this alternative set
2. **For retakes/makeup work**: Offer this set to students who need to redo the assignment
3. **For additional practice**: Provide this as extra practice material
4. **For A/B testing**: Give different groups different versions to reduce copying

### For Students

If you're working on the alternative exercises:

1. Read **P1_alt.md** and **P2_alt.md** to solve the problems
2. For the programming task, read **README_alt.md** for full instructions
3. Use **program_alt.cpp** as your starting template
4. Create your input file following the format in **treasuremap.txt**
5. Test your solution against the expected output shown in the README

## Testing the Alternative Exercises

To compile and test the reference solution:

```bash
cd s01
g++ -std=c++17 reference_alt.cpp -o reference_alt
./reference_alt
```

Expected output:
```
Hunt begins :
Explorer-alice is at (1,3)
Explorer-bob is at (4,2)
After 2 moves :
Explorer-alice is at (2,4)
Explorer-bob is at (3,1)
```

## Key Differences from Original

While maintaining the same difficulty level, the alternative exercises feature:

- **P1**: Recipe cooking instead of rectangle geometry
- **P2**: Financial transactions instead of game combat
- **Programming Task**: Treasure hunting explorers instead of Middle Earth warriors

All exercises teach the same C++ concepts:
- Class design and encapsulation
- Constructors and initialization
- Const correctness
- Pass-by-reference vs pass-by-value
- File I/O and string parsing
- Method implementation

## Notes

- The alternative exercises maintain the exact same learning objectives
- Error types and debugging challenges are preserved
- The code structure and complexity remain equivalent
- Follow-up discussion questions are adapted to the new themes
- All files follow the same naming convention with "_alt" suffix for easy identification
