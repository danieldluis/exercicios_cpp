#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quantos numeros: ";
    cin >> n;

    int pares = 0, impares = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;
    return 0;
}
