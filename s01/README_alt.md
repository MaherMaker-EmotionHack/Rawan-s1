# S01-ALT - The Great Treasure Hunt

**Date** : 25/04/2025

**Evaluation deadline** : 03/05/2025 at 4am, see [daily evaluation report](./evals.md).

> 🔒 Daily evaluation is over (live evaluation still runs tho), checkout the [reference solution](./reference_alt.cpp) for comparison ...

🔔 _Before going any further, be sure to be aware of the_

- [vscode installation and **settings**](../../common/software.md) for compilation
- [generic **git instructions**](../../common/git.md) on how to work with your student Gitlab repository

## Problems (2 bonus points)

📜 _Solve the following problems for the oral evaluation :_

- [P1-ALT](./P1_alt.md)
- [P2-ALT](./P2_alt.md)

## Programming task (2 bonus points)

📜 _Objective is to implement a treasure hunt game,_
_where brave explorers are searching for hidden treasures on a mysterious island._
_While the full program will be built along several exercise series, the first stage here_
_consists on implementing a small program simulating two explorers moving on a map represented by a 2D grid._

For that, we give the following [starting template](./program_alt.cpp) for the program. It contains a `main` function, 
that reads a `treasuremap.txt` input file providing :

- the **name** and **initial position** of the two explorers, indicated by a `[Explorers]` section
- the different **moves** of each explorer, indicated by _one or more_ `[Moves]` section(s)

An example is given in the [`treasuremap.txt` file](./treasuremap.txt),
where the first explorer is named _alice_ and is located in $(x,y) = (1,3)$,
and the second explorer is named _bob_ and is located in $(x,y) = (4,2)$.

Then, there is two rounds when both explorers move :

1. alice moves east ("E", so x += 1) and bob moves west ("W", so x -= 1)
2. alice moves north ("N", so y += 1) and bob moves south ("S", so y -= 1)

It means that after those two rounds, alice is at $(x,y) = (2,4)$ and bob is at $(x,y) = (3,1)$. 

You must implement the `Explorer` class, such that the full `main` function from the [starting template](./program_alt.cpp) works. 
To do that, we propose the following steps :

1. Compile the template
2. Add the attributes, the base constructor and the first method
3. Implement the movement features

**Stage 0 : compile the template.**

First, you can **comment** the part of code after `Stage 1` in the template (there is a simple way to do that in vscode, learn it !).
Then compile the file, and execute the program : it should not produce any output (if any, then solve the problem displayed in the console).

**Stage 1 : attribute, constructor and first method.**

Implement the `Explorer` class, by defining :

- three attributes `int x`, `int y`, and `string name` 
- a base constructor for this class, with the following signature : `Explorer(int x0, int y0, const string& n)`, where `x0`, `y0` and `n` are the input values for the attributes
- a `printPosition()` method that prints in the console the name and position of the explorer. For instance, using it on the explorer named `alice` with position 
$(x,y)=(1,3)$ at the beginning would print in the console :

```
Explorer-alice is at (1,3)
```

Once it's done, then uncomment the part between `Stage 1` and `Stage 2` in `main`, compile and check your code. Using the [given `treasuremap.txt` file](./treasuremap.txt), you should obtain the following output :

```
Hunt begins :
Explorer-alice is at (1,3)
Explorer-bob is at (4,2)
```

**Stage 2 : implementation of the movement features.**

Add then to your class two methods :

- `bool is(const string& n) const` : checks if the Explorer has the name as given in argument (returns `false` if not)
- `void move(const string& dir)` : modify the position depending on the direction `dir` given in argument ("N" for north, "S" for south, "W" for west, "E" for east).

Once it's done, uncomment the rest of the `main` function, compile and execute it with the [given `treasuremap.txt` file](./treasuremap.txt).
You should obtain the following output :

```
Hunt begins :
Explorer-alice is at (1,3)
Explorer-bob is at (4,2)
After 2 moves :
Explorer-alice is at (2,4)
Explorer-bob is at (3,1)
```

🎓 **Task Evaluation**

Implement everything in a `program_alt.cpp` file, and put in your personal folder for this series (`[loginID]/s01`) on your team repository.
Then push it to Gitlab, and wait for the daily and live evaluation to be activated.
A program will test your code, by compiling it and check its output with different `treasuremap.txt` files.
It will also generate a `evals.md` file in this folder (in course repository), that gives you a link allowing to
evaluate your code again if you have to correct anything.

⚔️ **To go further ...**

Add a `saveGrid` function, that takes two explorers as parameters, 
and save into a `grid.txt` file a 2D representation of each explorer on the grid. 
For instance, calling it after printing the initial positions would print in the file something like this :

```
| | |A| | |
| | | | | |
| | | |B| |
```

Where A stands for the first explorer (alice in the input example), and B for the second explorer (bob in the input example).
