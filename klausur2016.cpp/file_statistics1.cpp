#include <iostream>
#include <fstream> // file
using namespace std;

int main() {
   // ifstream: type of files
    ifstream my_file;
    my_file.open("file.txt"); // name of a file is always a string

    int line_count = 0;

    string line;

    int char_count = 0;

    int uppercase_letter_count = 0;

    string upper_chars;

    // int lowercase_letter_count = 0;

    while (getline(my_file, line)) { // keeps looping till no more line left
        cout << line.size() << endl;

        line_count++;
        char_count += line.size();
    
        int i = 0;
        while (i < line.size()) {
            if (isupper(line[i])) {
                uppercase_letter_count++;
                upper_chars += line[i];
            }
            i++;
        }

        upper_chars = upper_chars + "\n";
    }
    // count number of lines
    cout << line_count << endl;

    //count all chars in the file
    cout << char_count << endl;
    
    // count uppercase letters
    cout << uppercase_letter_count << endl;

    // count lowercase letters
    // cout << lowercase_letter_count << endl;

    cout << upper_chars << endl;

    return 0;
}




