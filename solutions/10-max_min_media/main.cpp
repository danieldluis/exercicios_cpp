#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quantos numeros: ";
    cin >> n;

    double x;
    double maximo, minimo, soma = 0;

    cin >> x;
    maximo = x;
    minimo = x;
    soma += x;

    for (int i = 1; i < n; i++) {
        cin >> x;
        soma += x;

        if (x > maximo)
            maximo = x;
        if (x < minimo)
            minimo = x;
    }

    cout << "Maior: " << maximo << endl;
    cout << "Menor: " << minimo << endl;
    cout << "Media: " << soma / n << endl;
    return 0;
}
