#include <iostream>
using namespace std;

int maior(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int a, b;
    cout << "Digite dois numeros: ";
    cin >> a >> b;

    cout << "Maior: " << maior(a, b) << endl;
    return 0;
}
