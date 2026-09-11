#include <iostream>
using namespace std;

int main() {
    double c, f;
    cout << "Temperatura em Celsius: ";
    cin >> c;
    f = c * 9.0 / 5.0 + 32;
    cout << f << " F" << endl;
    return 0;
}
