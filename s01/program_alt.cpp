#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using std::cout, std::endl, std::ifstream, std::string, std::istringstream;

class Explorer {
    // Your implementation of the class ...

};

void setup(istringstream& iss, const string& line){
    // Helper function : put a line string into an input string stream,
    // allowing the line to be split into words and read separately with the >> operator
    iss.clear(); iss.str(line);
}

int main() {
    ifstream inputFile("treasuremap.txt");
    if (not inputFile) {
        cout << "Error : missing a treasuremap.txt to read" << endl;
        return 1;
    }
    string line;
    istringstream iss;
    
    // Initial check ...
    std::getline(inputFile, line);  // read one line from the input file
    if ( not line.rfind("[Explorers]", 0) == 0 ) {
        cout << "Error : missing [Explorers] section at the beginning of the file" << endl;
        return 1;
    }

    // Stage 1 -------------------------------------------------------------------------

    // Read name and position for first explorer
    int x; int y; string name;
    std::getline(inputFile, line); setup(iss, line);
    iss >> name >> x >> y;          // separate the string stream into name and positions
    Explorer e1(x, y, name);

    // Read name and position for second explorer
    std::getline(inputFile, line); setup(iss, line);
    iss >> name >> x >> y;
    Explorer e2(x, y, name);

    // Print initial positions :
    cout << "Hunt begins :" << endl;
    e1.printPosition(); e2.printPosition();

    // Stage 2 -------------------------------------------------------------------------

    // Expect a [Moves] section next ...
    std::getline(inputFile, line);
    if ( not line.rfind("[Moves]", 0) == 0 ) {
        cout << "Error : cannot handle more than 2 explorers (for now ...) or no move" << endl;
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
            if (e1.is(name)) { e1.move(dir); }
            if (e2.is(name)) { e2.move(dir); }
        }        
    }

    // Final positions :
    cout << "After " << nMoves << " moves :" << endl;
    e1.printPosition(); e2.printPosition();
}
