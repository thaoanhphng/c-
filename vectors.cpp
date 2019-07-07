#include <iostream>
#include <vector>
using namespace std;

//ARRAY
int main() {
    int girl[] = {22, 19, 16}; // variable  - lowercase // length of array in cpp cant be changed, but the elements can be
    cout << girl[0] << " " << girl[2] << endl;

    string girl_name[] = {"Eva", "Anna", "Ivonne"};
    girl_name[1] = "Ann"; //change the element in array
    for (int i = 0; i < 3; i++) { //dont forget TYPE of variable!!!
        cout << girl_name[i] << endl;
    }

    //VECTOR
    vector<string> kick_out;// list with 1 elt

    kick_out.push_back("Kristi"); // add argument into the vector/list
    kick_out.push_back("Lily");

    kick_out.erase(kick_out.begin() + 1); // delete the 2nd element
    for (int i = 0; i < kick_out.size(); i++) {
        cout << kick_out[i] << endl;
    }
    return 0;
}



