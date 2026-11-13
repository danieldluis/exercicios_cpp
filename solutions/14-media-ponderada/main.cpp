#include <iostream>
#include <iomanip>
using namespace std;

double mediaPonderada(int notas[], int pesos[], int n) {
    double soma = 0, totalPesos = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i] * pesos[i];
        totalPesos += pesos[i];
    }
    return soma / totalPesos;
}

int main() {
    int n;
    cout << "Quantas notas: ";
    cin >> n;

    int notas[n], pesos[n];
    for (int i = 0; i < n; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
        cout << "Peso " << i + 1 << ": ";
        cin >> pesos[i];
    }

    cout << fixed << setprecision(2);
    cout << "Media ponderada: " << mediaPonderada(notas, pesos, n) << endl;
    return 0;
}   
