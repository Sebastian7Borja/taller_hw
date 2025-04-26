#include <iostream>
using namespace std;

void dibujarZ(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n-1 || j == n-1-i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Introduce un número impar >=3: ";
    cin >> n;

    if (n < 3 || n % 2 == 0) {
        cout << "Número inválido." << endl;
        return 1;
    }

    dibujarZ(n);
    return 0;
}
