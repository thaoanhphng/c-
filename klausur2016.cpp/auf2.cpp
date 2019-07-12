#include <iostream>
using namespace std;

int main() {
string str = "Heute ist Donnerstag. Wie geht es Ihnen? ";
string Montag = "Heute";
// hier eine while Schleife für: str.erase(6, 20);

// SOLUTION 1:
string new_str;

// for (int i = 0; i < str.size(); i++) {

//     if (i < 6 || i > 26) {
//     new_str = new_str + str[i];
//     }
// }
// str = new_str;
// cout << "Result= " << str << endl;

// SOLUTION 2:
str = "Heute ist Donnerstag. Wie geht es Ihnen? ";
new_str = "";

int i = 0;
while (i < str.size()) {
    if (i < 6 || i > 26) {
    new_str = new_str + str[i];
    }
    i++;
}
str = new_str;
cout << "Result 1 = " << str << endl;

// SOLUTION 3:
// string first_half = str.substr(1, 5);
// string second_half = str.substr(27, str.size());
// str = first_half + second_half;

// cout << "Result= " << str << endl;

// hier eine while Schleife für: str.replace(6,str.size(),"Sonntag!");

// SOL 1:
str = "Heute ist Donnerstag. Wie geht es Ihnen? ";

string first_half_2 = str.substr(0, 5);
string second_half_2 = " Sonntag!";
str = first_half_2 + second_half_2;

cout << "Result 2 = " << str << endl;

// SOL 2:
new_str = "";
str = "Heute ist Donnerstag. Wie geht es Ihnen? ";

i = 0;
while (i < 6) {
    new_str = new_str + str[i];
    i++;
}
str = new_str + "Sonntag!";

cout << "Result 3 = " << str << endl;
return 0;
}
