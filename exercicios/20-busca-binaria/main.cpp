#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> x;

    int esq = 0, dir = n - 1;

    // TODO: while (esq <= dir)
    //         meio = (esq + dir) / 2
    //         se v[meio] == x → imprime meio e sai
    //         se v[meio] < x  → esq = meio + 1
    //         senão           → dir = meio - 1
    //   se sair do loop sem encontrar → imprime -1

    return 0;
}
