#include <iostream>
#include <vector>
using namespace std;

int main() {
    int v;
    cin >> v;

    vector<int> moedas = {100, 25, 10, 5, 2, 1};
    vector<int> usadas(moedas.size(), 0);
    int total = 0;

    for (int i = 0; i < moedas.size(); i++) {
        usadas[i] = v / moedas[i];
        total += usadas[i];
        v %= moedas[i];
    }

    cout << "Total: " << total << " moedas" << endl;
    for (int i = 0; i < moedas.size(); i++)
        cout << moedas[i] << ": " << usadas[i] << endl;

    return 0;
}
