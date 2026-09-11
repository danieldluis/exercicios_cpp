#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quantos numeros: ";
    cin >> __________________;

    double x;
    double maximo, minimo, soma = 0;

    // TODO: lê o primeiro número e inicializa maximo e minimo
    cin >> __________________;
    maximo = __________________;
    minimo = __________________;
    soma += __________________;

    // TODO: lê os restantes n-1 números e atualiza maximo, minimo, soma
    for (int i = 1; i < __________________; i++) {
        cin >> __________________;
        soma += __________________;

        if (__________________)
            __________________;
        if (__________________)
            __________________;
    }

    cout << "Maior: " << __________________ << endl;
    cout << "Menor: " << __________________ << endl;
    cout << "Media: " << __________________ << endl;
    return 0;
}
