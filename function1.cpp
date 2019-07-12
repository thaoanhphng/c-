#include <iostream>
using namespace std;


string add_string( string a, string b) { //return_type_of_function function_name (arg_type arg_name, ...)
    return a + b;                      
}

int bigger_num (int x, int y) {
    if (x > y)  {
        return x;
    } else {
        return y;
    }  
}

int main() {
    string a = "Hello";
    string b = " world!";
    cout << add_string(a, b) << endl;

    int x = 45;
    int y = 2;
    cout << bigger_num(x, y) << endl;

    cout << add_string ("Hello ", "world!") << endl;
}



