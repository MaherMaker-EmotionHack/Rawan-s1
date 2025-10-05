# S01 - Uncovering the C++ Earth

**Date** : 25/04/2025

**Evaluation deadline** : 03/05/2025 at 4am, see [daily evaluation report](./evals.md).

> 🔒 Daily evaluation is over (live evaluation still runs tho), checkout the [reference solution](./reference.cpp) for comparison ...

🔔 _Before going any further, be sure to be aware of the_

- [vscode installation and **settings**](../../common/software.md) for compilation
- [generic **git instructions**](../../common/git.md) on how to work with your student Gitlab repository

## Problems (2 bonus points)

📜 _Solve the following problems for the oral evaluation :_

- [P1](./P1.md)
- [P2](./P2.md)

## Programming task (2 bonus points)

📜 _Objective is to implement a round per round strategy game,_
_where a fierce battle is taking place between the Alliance and the hordes of Sauron in the Middle Earth._
_While the full program will be built along several exercise series, the first stage here_
_consists on implementing a small program simulating two military units evolving on a battlefield represented by a 2D grid._

For that, we give the following [starting template](./program.cpp) for the program. It contains a `main` function, 
that reads a `battlefield.txt` input file providing :

- the **name** and **initial position** of the two units, indicated by a `[Units]` section
- the different **moves** of each units, indicated by _one or more_ `[Moves]` section(s)

An example is given in the [`battlefield.txt` file](./battlefield.txt),
where the first unit consists of _orcs_ and is located in $(x,y) = (2,3)$,
and the second unit consists of _elves_ and is located in $(x,y) = (0,1)$.

Then, there is two rounds when both units move :

1. orcs move south ("S", so y -= 1) and elves move to north ("N", so y += 1)
2. orcs move west ("W", so x -= 1) and elves move to east ("E", so x += 1)

It means that after those two rounds, both orcs and elves are in the same position, that is $(x,y) = (1,2)$. 

You must implement the `Unit` class, such that the full `main` function from the [starting template](./program.cpp) works. 
To do that, we propose the following steps :

1. Compile the template
2. Add the attributes, the base constructor and the first method
3. Implement the movement features

**Stage 0 : compile the template.**

First, you can **comment** the part of code after `Stage 1` in the template (there is a simple way to do that in vscode, learn it !).
Then compile the file, and execute the program : it should not produce any output (if any, then solve the problem displayed in the console).

**Stage 1 : attribute, constructor and first method.**

Implement the `Unit` class, by defining :

- three attributes `int x`, `int y`, and `string name` 
- a base constructor for this class, with the following signature : `Unit(int x0, int y0, const string& n)`, where `x0`, `y0` and `n` are the input values for the attributes
- a `printPosition()` method that prints in the console the name and position of the unit. For instance, using it on the unit named `orcs` with position 
$(x,y)=(2,3)$ at the beginning would print in the console :

```
Unit-orcs is at (2,3)
```

Once it's done, then uncomment the part between `Stage 1` and `Stage 2` in `main`, compile and check your code. Using the [given `battlefield.txt` file](./battlefield.txt), you should obtain the following output :

```
Battle starts :
Unit-orcs is at (2,3)
Unit-elves is at (0,1)
```

**Stage 2 : implementation of the movement features.**

Add then to your class two methods :

- `bool is(const string& n) const` : checks if the Unit has the name as given in argument (returns `false` if not)
- `void move(const string& dir)` : modify the position depending on the direction `dir` given in argument ("N" for north, "S" for south, "W" for west, "E" for east).

Once it's done, uncomment the rest of the `main` function, compile and execute it with the [given `battlefield.txt` file](./battlefield.txt).
You should obtain the following output :

```
Battle starts :
Unit-orcs is at (2,3)
Unit-elves is at (0,1)
After 2 moves :
Unit-orcs is at (1,2)
Unit-elves is at (1,2)
```

🎓 **Task Evaluation**

Implement everything in a `program.cpp` file, and put in your personal folder for this series (`[loginID]/s01`) on your team repository.
Then push it to Gitlab, and wait for the daily and live evaluation to be activated.
A program will test your code, by compiling it and check its output with different `battlefield.txt` files.
It will also generate a `evals.md` file in this folder (in course repository), that gives you a link allowing to
evaluate your code again if you have to correct anything.

⚔️ **To go further ...**

Add a `saveGrid` function, that takes two units as parameters, 
and save into a `grid.txt` file a 2D representation of each units on the grid. 
For instance, calling it after printing the initial positions would print in the file something like this :

```
| | |1|
| | | |
|2| | |
```

Where 1 stands for the first unit (orcs in the input example), and 2 for the second unit (elves in the input example).
