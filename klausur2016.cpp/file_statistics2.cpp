#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myfile;
    myfile.open("file.txt");

    string myline;

    string myalpha;

    int uppercase_chars = 0;

    int line = 0;

    while(getline(myfile, myline)) {
        int i = 0;

        line++;
    
        while(i < myline.size()) {  // .xyz() : method function, xyz() : (non method) function
                                    // == : checking if equals to;
                                    // '' : single char;
                                    // "" : string of multiple chars
            if (isalpha(myline[i]) || myline[i] == ' ') {
                myalpha += tolower(myline[i]);
                
            }
        
            if (isupper(myline[i])) {
                uppercase_chars++;
            }

            i++;
        }
        myalpha += "\n";

    }
    cout << myalpha << endl;
    cout << line << endl;
    cout << uppercase_chars << endl;

    return 0;
}

bool is_num(char c) {
    if (c >= '0' && c <= '9') { 
    //if (c >= 48 && c <= 57)
        return true;
    } else {
        return false;
    }

/*
    if (isdigit(c)) {
        return true;
    }
    else {
        return false;
    }
*/



}