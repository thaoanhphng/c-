#include <iostream>
#include <vector>
using namespace std;

class Wordlist {
    public:
    vector<string> list_of_words;
    void add_word(string new_word) {
        list_of_words.push_back(new_word);
    }

    void print_words() {
        for (int i = 0; i < list_of_words.size(); i++) {
            cout << list_of_words[i] << endl;
        }
    }
};

int main() {
    string new_word = "Instanz";
    Wordlist cpp_terms;
    cpp_terms.add_word(new_word);
    
    cpp_terms.print_words();

    return 0;
}