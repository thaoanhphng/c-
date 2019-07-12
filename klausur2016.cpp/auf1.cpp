#include <iostream>
using namespace std;
int main() {
    string str = "Heute ist Donnerstag. Wie geht es Ihnen? ";
    string Montag = "Heute";
    str.erase(6, 20);
    cout << "Result= " << str << endl; //Result= Heute geht es Ihnen? 
    str.replace(6,str.size(),"Sonntag!");
    cout << "Result= " << str << endl; //Result= Heute Sonntag!
    return 0;
}


