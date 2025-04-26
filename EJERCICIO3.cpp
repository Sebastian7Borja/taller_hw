#include <iostream>
using namespace std;

void dibujarCuadradosPegados(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (i == 0 || i == n-1 || j == 0 || j == n-1 ? "*" : " ");
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << " ";

        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Introduce el tamaño del cuadrado (impar y >=5): ";
    cin >> n;

    if (n < 5 || n % 2 == 0) {
        cout << "El número debe ser impar y mayor o igual a 5." << endl;
        return 1;
    }

    dibujarCuadradosPegados(n);
    return 0;
}