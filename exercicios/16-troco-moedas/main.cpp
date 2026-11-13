#include <iostream>
#include <vector>
using namespace std;

int main() {
    int v;
    cin >> v;

    vector<int> moedas = {100, 25, 10, 5, 2, 1};
    vector<int> usadas(moedas.size(), 0);
    int total = 0;

    // TODO: para cada moeda (da maior para a menor):
    //   - quantas cabem?  (v / moeda)
    //   - regista em usadas[i]
    //   - atualiza v e total

    // TODO: imprime "Total: X moedas"
    // TODO: imprime cada moeda e quantas foram usadas

    return 0;
}
