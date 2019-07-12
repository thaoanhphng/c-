#include <iostream>
#include <regex>
using namespace std;

int main() {
	string test_string_1 = "Here is a string!";
	regex a_pattern(".*a.*");
	cout << regex_match(test_string_1, a_pattern) << endl;

	string test_string_2 =
		"Passing by Value\n"
		"By default, arguments in C++ are passed by value.\n"
		"When passed by value, a copy of the argument is passed to the function.\n"
		"Example:\n"
		"void myFunc(int x) {\n"
		"x = 100;\n"
		"\n"
		"int main() {\n"
		"int var = 20;\n"
		"myFunc(var);\n"
		"cout << var;\n"
		"}\n"
		"// Outputs 20";
    regex number_pattern("[\\S\\s]*\\d[\\S\\s]*");

    // NOTE: 
    // \s = whitespace (space, \n, \t)
    // \S = not whitespace
    // ".*" = everything but newline

    cout << regex_match(test_string_2, number_pattern) << endl;


    string test_string_3 = "Übungsblätter werden anonymisiert an die Korrektoren übermittelt. Vermeide also - sofern nicht explizit seitens der Übungsleitung anders gefordert - persönliche Angaben in deiner Abgabe um die Anonymität zu wahren. Ebenso können eMails an den Korrektor die Anonymität aushebeln. Der persönliche Kontakt ist an vielen Stellen dennoch sicher richtig und wichtig.";
    regex start_cap_pattern("^[A-ZÄÜÖ].*");
    cout << regex_match(test_string_3, start_cap_pattern) << endl;

    return 0;
}


