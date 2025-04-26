#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el valor n para graficar la Z: ";
    cin >> n;
    if (n<3 || n % 2 == 0) {
        cout << "El valor no cumple la condición";
        return 1;
    }
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n-1; j++) {
            if (i == 0) {
                cout << "*";
            }else if (i == n-1) {
                cout << "*";
            }else if (j == n - i - 1) {
                cout << "*";
            }else {
                cout << " ";
            }

        }
cout << endl;
    }
    return 0;
}