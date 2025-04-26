#include <iostream>
using namespace std;

void dibujarCruzPuraYDireccional(int n) {
    int centro = n / 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (
                (i == centro) ||                          // Línea horizontal central
                (j == centro) ||                          // Línea vertical central
                (i == 0 && j >= centro) ||                // Norte: fila 0 hacia la derecha
                (i == n - 1 && j <= centro) ||            // Sur: fila inferior hacia la izquierda
                (j == n - 1 && i >= centro) ||            // Este: columna derecha hacia abajo
                (j == 0 && i <= centro)                   // Oeste: columna izquierda hacia arriba
            )
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Introduce un número impar >= 5: ";
    cin >> n;

    if (n < 5 || n % 2 == 0) {
        cout << "Número inválido." << endl;
        return 1;
    }

    dibujarCruzPuraYDireccional(n);
    return 0;
}
