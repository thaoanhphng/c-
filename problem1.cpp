#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> burning_pizza;
    string pizza_type;

    for (int i = 0; i < 5; i++) {
        cin >> pizza_type;
        burning_pizza.push_back(pizza_type);
    }
    bool should_we_keep_going = true;
    for (int i = 0; i < burning_pizza.size() && should_we_keep_going; i++) {
        cout << burning_pizza[i];
        if (burning_pizza[i].size() > 10) {
            should_we_keep_going = false;
        }
    }
}

