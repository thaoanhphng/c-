#include <iostream>
using namespace std;

// gọi hàm: dùng dáu chấm "." trước tên hàm


class Girl { // class = type of type
    private: //can oly be accessed by the class
        int age;
        string location;
        bool single;
        string hair_color; //can be accessed by everything
    public: //c
        void set_age(int _age) { // function that SETS the infos
            age = _age + 2;
        }

        int get_age() { // functions that GETS the infos //option commnad u : upper case, option command shift u: lower case
            return age;
        }

        string name; //member variable
        int age;
        string education;
        float height;    
};

// declare class before using main or any function that uses it
int main() {
    // Girl is just a "type"
    Girl mygirl;
    mygirl.name = "Eva";
    mygirl.set_age(22); //put the argument inside the parenttheses of the function 
    // avriable.function: methode
    mygirl.education = "lmu";
    mygirl.height = 1.70;
    
    cout << "My girl's name is " << mygirl.name << endl;

    return 0;
}

// > g++ file_name.cpp : to compile the file
// ./a.out : run code