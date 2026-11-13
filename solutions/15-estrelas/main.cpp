#include <iostream>
using namespace std;

void imprimeEscada(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Altura da escada: ";
    cin >> n;

    imprimeEscada(n);
    return 0;
}   
