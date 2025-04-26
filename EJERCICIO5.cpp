#include <iostream>
using namespace std;

void dibujarFigura(int n) {
    int ancho = n + n / 2;

    for (int i = 0; i < n; i++) {
        cout << string(i, ' '); // Inclinación izquierda

        for (int j = 0; j < ancho; j++) {
            if (i == 0 || i == n - 1) cout << "*";
            else if (j == 0 || j == i * 2 - 1 || j == ancho - 1) cout << "*";
            else cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Tamaño (impar >=5): ";
    cin >> n;

    if (n < 5 || n % 2 == 0) {
        cout << "Inválido.\n";
        return 1;
    }

    dibujarFigura(n);
    return 0;
}
