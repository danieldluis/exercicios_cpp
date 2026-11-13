#include <iostream>
using namespace std;

int contarDigitosPrimos(int n) {
    int cont = 0;
    while (n > 0) {
        int d = n % 10;
        if (d == 2 || d == 3 || d == 5 || d == 7)
            cont++;
        n /= 10;
    }
    return cont;
}

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    cout << "Digitos primos: " << contarDigitosPrimos(n) << endl;
    return 0;
}   
