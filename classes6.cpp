#include <iostream>
using namespace std;

class Translator {
    public:
        string en_vi_translate(string en_word) { // hành động
            return "nhà";
        }
};

int main() {
    Translator en_vi_translator; // biến ở hàm khác nhau không liên quan đến nhau, kể cả cùng tên
    string en_w = "home";
    string vi_w = en_vi_translator.en_vi_translate(en_w);

    cout << vi_w << endl;

    return 0;
} 


