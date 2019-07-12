#include <iostream>
#include <vector>

using namespace std;

class Exam {
    private:
        int total_points;
        vector<string> topics;

        string name;
        int credits;
        bool difficult;

    public:
        // create a function

        //void add_topic(string topic) {
        //  topics.push_back(topic); // methode: .methode_name(variable)
        //}

        void set_total_point(int _total_points) {
            total_points = _total_points;
        }

        void print_total_points() {
            cout << total_points << endl;
        }

        void print_topics() {
            for(int i = 0; i < topics.size(); i++) {
                cout << topics[i] << endl;
            }
        }

        //WAY OF DEFINING METHOD 2:
        void do_something(int how_often);

        //DEFINGING METHOD ADD_TOPIC 2:
        void add_topic(string topic);

        // SHORTEST WAY OF CREATING METHODS!!!
        // Constructor function: preparing part
        Exam(string _name, int _credits, bool _difficult) { // 'void set_infos' replaced by 'Exam'
            name = _name;                                   // normal function with 'void'...
            credits = _credits;
            difficult = _difficult;
            // add a value to the vector 'topics'
            // insert unchanged infos
            topics.push_back("student_id");
        }

    protected:

}; // SEMIFUCKINGCOLON AFTER CLASS!!!!!

// Outside of the class def
// return_type name_of_the_class::method_name(method_args) method_body

void Exam::do_something(int how_often) {
    if (how_often < 4) {
        cout << "Not enough!" << endl;
    }
    if (5 <= how_often && how_often <= 10) {
        cout << "That's enough." << endl;
    }
    if (how_often > 10) {
        cout << "Too much!" << endl;
    }
}

void Exam::add_topic(string new_topic) {
    topics.push_back(new_topic);
}

int main() {
    int how_often;
    cout << "How many times you choke in a day?" << endl;
    cin >> how_often;
   
    // cach 1:
    //Exam exam;
    //exam.set_infos("C++", 9, true);

    // cach 2:
    Exam exam("C++", 9, true);

    exam.do_something(how_often);
}

