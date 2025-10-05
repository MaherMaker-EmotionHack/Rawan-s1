#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using std::cout, std::endl, std::ifstream, std::string, std::istringstream;

class Unit {
    int x;
    int y;
    string name;

public:
    Unit(int x0, int y0, const string& n): x(x0), y(y0), name(n) {}
    Unit(const string& n): Unit(0, 0, n) {}

    void move(const string& dir) {
        if (dir == "N") { y += 1; }
        if (dir == "S") { y -= 1; }
        if (dir == "E") { x += 1; }
        if (dir == "W") { x -= 1; }
    }

    bool is(const string& n) const {
        return n == name;
    }

    void printPosition() const {
        cout << "Unit-" << name << " is at (" << x << "," << y << ")" << endl; 
    }
};

void setup(istringstream& iss, const string& line){
    // Helper function : put a line string into an input string stream,
    // allowing the line to be split into words and read separately with the >> operator
    iss.clear(); iss.str(line);
}

int main() {
    ifstream inputFile("battlefield.txt");
    if (not inputFile) {
        cout << "Error : missing a battlefield.txt to read" << endl;
        return 1;
    }
    string line;
    istringstream iss;
    
    // Initial check ...
    std::getline(inputFile, line);  // read one line from the input file
    if ( not line.rfind("[Units]", 0) == 0 ) {
        cout << "Error : missing [Units] section at the beginning of the file" << endl;
        return 1;
    }

    // Stage 1 -------------------------------------------------------------------------

    // Read name and position for first unit
    int x; int y; string name;
    std::getline(inputFile, line); setup(iss, line);
    iss >> name >> x >> y;          // separate the string stream into name and positions
    Unit u1(x, y, name);

    // Read name and position for second unit
    std::getline(inputFile, line); setup(iss, line);
    iss >> name >> x >> y;
    Unit u2(x, y, name);

    // Print initial positions :
    cout << "Battle starts :" << endl;
    u1.printPosition(); u2.printPosition();

    // Stage 2 -------------------------------------------------------------------------

    // Expect a [Moves] section next ...
    std::getline(inputFile, line);
    if ( not line.rfind("[Moves]", 0) == 0 ) {
        cout << "Error : cannot handle more than 2 units (for now ...) or no move" << endl;
        return 1;
    }

    // Read all [Moves] sections until the end of the file
    int nMoves = 1;
    string dir;
    while( std::getline(inputFile, line) ) {
        if (line.rfind("[Moves]", 0) == 0) { 
            nMoves += 1;
            continue; 
        } else {
            setup(iss, line);
            iss >> name >> dir;
            if (u1.is(name)) { u1.move(dir); }
            if (u2.is(name)) { u2.move(dir); }
        }        
    }

    // Final positions :
    cout << "After " << nMoves << " moves :" << endl;
    u1.printPosition(); u2.printPosition();
}