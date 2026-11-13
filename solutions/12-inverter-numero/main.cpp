#include <iostream>
using namespace std;

int inverter(int n) {
    int resultado = 0;
    while (n > 0) {
        resultado = resultado * 10 + n % 10;
        n /= 10;
    }
    return resultado;
}

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    cout << "Invertido: " << inverter(n) << endl;
    return 0;
}   
