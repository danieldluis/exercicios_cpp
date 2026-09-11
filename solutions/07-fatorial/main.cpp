#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    long long fatorial = 1;

    for (int i = 2; i <= n; i++)
        fatorial *= i;

    cout << n << "! = " << fatorial << endl;
    return 0;
}
