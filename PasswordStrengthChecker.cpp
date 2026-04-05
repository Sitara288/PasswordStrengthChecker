#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    int length = password.length();
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSymbol = false;

    for(int i = 0; i < length; i++) {
        if(isupper(password[i])) hasUpper = true;
        else if(islower(password[i])) hasLower = true;
        else if(isdigit(password[i])) hasDigit = true;
        else hasSymbol = true;
    }

    // Weak
    if(length < 6) {
        cout << "Weak Password ?";
    }
    // Strong
    else if(length >= 8 && hasUpper && hasLower && hasDigit && hasSymbol) {
        cout << "Strong Password ";
    }
    // Medium
    else {
        cout << "Medium Password ";
    }

    return 0;
}
