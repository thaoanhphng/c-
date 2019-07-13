#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myvec;
    myvec.push_back(3);
    myvec.push_back(6);
    myvec.push_back(2);
    myvec.push_back(8);
    myvec.push_back(5);

    // vector<int> myvec = { 3, 6, 2, 8, 5};

    // Iterator version:
    vector<int>::iterator it;
    for (it = myvec.begin(); it != myvec.end(); it++) {
        cout << *it << endl;
    }

    // it = myvec.begin();
    // while (it != myvec.end()) {
    //     cout << *it << endl;
    //     it++;
    // }

    // Normal version:
    // for (int i = 0; myvec.size(); i++) {
    //     cout << myvec[i] << endl;
    // }





}