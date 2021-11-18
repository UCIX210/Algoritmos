#include <iostream>
using namespace std;
int main(){   
    int cantidad = 15;
    float numeros[cantidad];
    for(int i = 0; i<cantidad;i++){
        cout << "Dame el numero " << i+1 << endl;
        cin >> numeros[i];
    }
    float max = numeros[0];
    float min = numeros[0];

    for (int i = 0; i < cantidad; i++){
        if (max<numeros[i]){
            max = numeros[i];
        }
        if (min>numeros[i]){
            min = numeros[i];
        }   
    }
    cout << "El maximo es: " << max << endl;
    cout << "El minimo es: " << min << endl;

}