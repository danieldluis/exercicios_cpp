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
    int pos = -1;

    while (esq <= dir) {
        int meio = (esq + dir) / 2;
        if (v[meio] == x) {
            pos = meio;
            break;
        } else if (v[meio] < x) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }

    cout << pos << endl;
    return 0;
}
