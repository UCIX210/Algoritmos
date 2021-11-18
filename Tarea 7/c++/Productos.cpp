#include <iostream>
using namespace std;
int main(){   
    float total = 0;
    int cantidad = 5;
    string articulo[cantidad];
   
    float precio[cantidad];
    for(int i = 0; i<cantidad;i++){
        cout << "Dame el articulo " << i+1 << ": ";
        cin >> articulo[i];
        cout << "¿Cual es el precio del articulo -" << articulo[i]<<"- ?: $";
        cin >> precio[i];
        total = total + precio[i];
    }
    cout << "-----------------------------" << endl;
    for (int i = 0; i < cantidad; i++){
        cout << articulo[i] << "------ $" << precio[i] << endl;
    }
    cout << "-----------------------------" <<endl;
    cout <<"Total a pagar: $" << total << endl;
}