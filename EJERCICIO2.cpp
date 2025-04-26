#include <iostream>
using namespace std;

void dibujarCruzPuraYDireccional(int n) {
    int centro = n / 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (
                (i == centro) ||                          
                (j == centro) ||                          
                (i == 0 && j >= centro) ||                
                (i == n - 1 && j <= centro) ||            
                (j == n - 1 && i >= centro) ||            
                (j == 0 && i <= centro)                   
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
