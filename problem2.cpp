#include <iostream>
#include <vector>
using namespace std;


//FUNKTION ALWAYS DEFINED ABOVE MAIN!!!

//vector of string
vector<wstring> tu; //wstring: typing unicode (eg: vietnamese)
    

wstring find_word(wchar_t my_char) { //wchar_t
    // search through vector tu, find word begins with my_char and return it
    // if no word is found, return "boring!"

    for (int i = 0; i < tu.size(); i++) {
        if (tu[i][0]== my_char) {
            return tu[i];
        }
    }
    return L"nothing you boring ass"; // 'L' for 'long': wstring
} 

int main() {
    int word_count;
    wstring new_word;
    wchar_t fav_char; 
    wcout << "How many words you want to type in?" << endl;
    wcin >> word_count;
    wcout << "Please type in " << word_count << " words!" << endl;
   
    int i = 0;
    while (i < word_count) {
        wcin >> new_word;
        tu.push_back(new_word);
        i++;
    }

    wcout << "Please insert your favorite character!" << endl;
    wcin >> fav_char;

    wstring word_found = find_word(fav_char);
    wcout << "Hier is your damn word: " << word_found << "!!!" << endl;
}