#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool palindromo = true;
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            palindromo = false;
            break;
        }
    }

    cout << (palindromo ? "Sim" : "Não") << endl;
    return 0;
}
