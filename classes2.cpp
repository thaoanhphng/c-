#include <iostream>
using namespace std;

class Animal { //always creat a class outside pf the main function
// as well as define things
    private:
    string species;
    int age;
    string environment;

    public:
    string name;
    string owner;

    void say_name() { // void: dont wanna give out anything
        cout << name << endl;
    }

    void set_age(int _age) { //set the information (age)
        age = _age; 
    }

    int get_age() { //int: because get_age gives out the infos
        return age;
    }

    string get_species() { //get_ and set_ functions normally come together
        return species;
    }

    void set_species(string _species) {
        species = _species;
    }

}; //semicolon after class definition!!!

int main() {
    Animal dog; // now a class is a type
    Animal cat;
    dog.name = "Tom";
    dog.say_name(); //say_name: methode
    return 0;
}

