#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str = "Hello world here is Tina learning C++";
    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        if (!isalpha(str[i])) {
            str[i] = ' ';
        }
    }
    cout << str << endl;
    return 0;
}