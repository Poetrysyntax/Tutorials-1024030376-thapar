#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u') {
            result += s[i];
        }
    }

    cout << "String without vowels: " << result << endl;

    return 0;
}
