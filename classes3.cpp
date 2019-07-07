#include <iostream>
#include <vector>
using namespace std;

class Dancing { // class is a TYPE!!!

private:
    vector<string> dance_types;

public:
    void learning(string new_dance) { //parentheses, function = type of methode, every function takes argument
        dance_types.push_back(new_dance);
        // destination.push_back(new elt)
        // push_back() : add new elt to the vector
        // argument - function
        // elt - array/vector

        
    } 

    void print_dance_types() {
        for (int i = 0; i < dance_types.size(); i++) {
            cout << dance_types[i] << endl;
        }
    }
};


int main() {
    Dancing thaoanh; // thaoanh is a variable -> no upper_case
    thaoanh.learning("Tango"); // add Tango into the vector dance_types
                               // class Dancing contains vector dance_types
    thaoanh.learning("Waltz");
    thaoanh.learning("Salsa");
    thaoanh.learning("Rumba");
    thaoanh.learning("Cha-cha-cha");
    thaoanh.learning("Jive");
    thaoanh.learning("Discofox");

    Dancing markus;
    markus.learning("Swing");
    markus.learning("Argentinian Tango");
    markus.learning("Cha-cha-cha");

    thaoanh.print_dance_types();
    markus.print_dance_types();
}