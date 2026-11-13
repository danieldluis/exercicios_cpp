#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool trocou = true;
    while (trocou) {
        trocou = false;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                trocou = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << v[i];
    }
    cout << endl;

    return 0;
}
