#include <iostream>
#include <vector>
using namespace std;


class Animal {
    private: // only Varables in private needed to have set and get methods (in "public")
        string species;
        string environment;
    public:
        string name;
        int age;
        // calling a method, use dot.
        void set_name(string _name) { // we set the name to the Animal
            name = _name;
        }
        void set_species(string _species) { // we set the species to the Animal
            species = _species;
        }
        string get_species() { // let Animal tell us what kind of species they are
            return species; // return the value that we need
        }
};

class Dog : public Animal { // telling Dog is a child of Animal
    // Infos Dog has but Animals doesnt
    private:
        string owner;
        string hair_color;
    public:
        void set_owner(string _owner) {
            owner = _owner;
        }
        void set_hair_color(string _hair_color) {
            hair_color = _hair_color;
        }
        string get_hair_color() {
            return hair_color;
        }
};

int main() {
    // creat a Dog
    Dog cun; // varial name IMMER lower case
    Dog milu;
    Animal koala;

    cun.set_name("Cun");
    milu.set_name("Milu");
    koala.set_name("liam");
    koala.set_species("Koala");

    cun.set_hair_color("Yellow");
    milu.set_hair_color("Black");

    vector<Animal> my_fav_ani; // type of the vector is "Animal"
    my_fav_ani.push_back(cun); // cant add things that aint real
    my_fav_ani.push_back(milu);

    for(int i = 0; i < my_fav_ani.size(); i++) { // string: size = length, vector: size
        cout << my_fav_ani[i].name << endl; // get 'name' directly from 'public'
    } 

    vector<Dog> my_fav_dog;
    my_fav_dog.push_back(cun);

    for(int i = 0; i < my_fav_dog.size(); i++) {
        cout << my_fav_dog[i].get_hair_color() << endl;
    }
return 0;
} 