#include <iostream>
using namespace std;

class Human {
    private: //access modifier section
        string email;
        string phone_number;

    public: //access modifier section
        string get_phone_number() {
            return phone_number;
        }

        Human(string _email, string _phone_number, int _balance) {
            email = _email;
            phone_number = _phone_number;
            int balance = _balance;
        }

    protected:  //access modifier section
                // just like private, but in inherited class infos in protected access.
        int balance;
};

class Student: public Human { //INHERITANCE
    private:
        string fav_food;
        string hobbies;

    public:
        void check_balance() {
            if (balance < 150) {
                cout << "This student needs financial support." << endl;
            } else {
                cout << "No financial support needed." <<endl;
            }
        }


        Student(string _email, string _phone_number, int _balance,
            string _fav_food, string _hobbies) : Human(_email, _phone_number, _balance) {
                fav_food = _fav_food;
                hobbies = _hobbies;
        }


    protected:
        int expat_time;

};

int main() {
    Human thao_anh("thaoanhphan@gmail.com", "0176776776", 20000000000000);
    Student cun("cunday@hotmail.com", "017777777", 1000000000000000000, "chili, lime", "drawing, cancing");

}

