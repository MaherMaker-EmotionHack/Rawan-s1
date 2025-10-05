# Alternative Homework Set - Summary

This repository now contains a complete alternative set of homework exercises for S01, maintaining the same difficulty level but with different themes to provide variety and reduce copying.

## What Has Been Added

All alternative exercise files are located in the `s01/` directory with the `_alt` suffix:

### 1. Problem Exercises (2 files)
- **P1_alt.md** - Cooking-themed problem replacing the Rectangle exercise
  - Theme: Recipe class with cooking time and temperature
  - Same errors: missing const, incomplete parameter assignment
  
- **P2_alt.md** - Bank account-themed problem replacing the Mage exercise
  - Theme: BankAccount class with transfer functionality
  - Same errors: missing constructor arguments, pass-by-value issue

### 2. Programming Task (4 files)
- **README_alt.md** - Complete instructions for the treasure hunt game
  - Theme: Explorers searching for treasure on an island
  - Same structure: 2D grid movement, file I/O, staged implementation
  
- **program_alt.cpp** - Student template file with class placeholder
- **reference_alt.cpp** - Complete reference solution
- **treasuremap.txt** - Input file for the programming task

### 3. Documentation (2 files)
- **SOLUTIONS_alt.md** - Detailed explanations of problems and solutions
- **ALT_EXERCISES_GUIDE.md** - Comprehensive usage guide for instructors

### 4. Configuration (1 file)
- **.gitignore** - Excludes compiled binaries and temporary files

## Quick Start

To use the alternative exercises:

1. Direct students to the alternative files: `P1_alt.md`, `P2_alt.md`, and `README_alt.md`
2. Students should work with `program_alt.cpp` as their template
3. The input file format is in `treasuremap.txt`
4. Reference solutions are in `reference_alt.cpp` and `SOLUTIONS_alt.md`

## Testing the Exercises

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

## Learning Objectives (Same as Original)

Both the original and alternative exercises teach:
- Class design and encapsulation
- Constructors and member initialization
- Const correctness
- Pass-by-reference vs pass-by-value
- File I/O and string parsing
- Method implementation
- Debugging compilation errors
- Debugging logic errors

## Comparison with Original

| Aspect | Original | Alternative |
|--------|----------|-------------|
| **P1 Theme** | Rectangle geometry | Recipe cooking |
| **P2 Theme** | Mage combat | Bank transfers |
| **Programming Task** | Middle Earth battle (Unit/orcs/elves) | Treasure hunt (Explorer/alice/bob) |
| **Input File** | battlefield.txt | treasuremap.txt |
| **Difficulty** | Same | Same |
| **Concepts** | Same | Same |
| **Errors** | Same | Same |

## Use Cases

1. **Makeup/Retake assignments** - Students who need to redo the work
2. **Additional practice** - Extra exercises for students who want more practice
3. **Preventing copying** - Give different groups different versions
4. **Future semesters** - Rotate between original and alternative sets

## File Locations

All files are in `/s01/` directory:
- P1_alt.md
- P2_alt.md  
- README_alt.md
- program_alt.cpp
- reference_alt.cpp
- treasuremap.txt
- SOLUTIONS_alt.md
- ALT_EXERCISES_GUIDE.md

For detailed information, see `s01/ALT_EXERCISES_GUIDE.md`.
