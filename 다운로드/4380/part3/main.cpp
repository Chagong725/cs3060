#include <iostream>
#include <string>
#include "myUtils.h"

using namespace std;

bool isValidInput(const string& input) {
    // input val check
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }
    unsigned long long num = stoull(input);
    return (num <= 4294967295);
}

int main() {
    string input;
    cout << "Enter a non-negative base 10 integer between 0 and 4294967295 (with no commas) and hit Enter/Return: ";
    cin >> input;

    if (!isValidInput(input)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    unsigned int decimal = stoul(input);
    string binary = convTen2Two(decimal);
    cout << "Output: " << binary << endl;

    return 0;
}
