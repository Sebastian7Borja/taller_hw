#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa el valor para contar: ";
    cin >> n;

    for (int i=0; i<=n; i++) {
        cout << i;
        if (i<n){
            cout <<",";
        }
    }
    cout<<"MODIFICACIÓN HECHA";
return 0;
}