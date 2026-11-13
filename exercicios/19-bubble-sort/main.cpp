#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // TODO: bubble sort
    //   bool trocou = true;
    //   while (trocou) {
    //       trocou = false;
    //       for (int i = 0; i < n - 1; i++) {
    //           if (v[i] > v[i+1]) { swap; trocou = true; }
    //       }
    //   }

    // TODO: imprime o vetor ordenado

    return 0;
}
