#include <iostream>
using namespace std;

int descomponer(int n);


int main(){
    int a;
    cout << "Dame un numero entero mayor a 1: ";
    cin >> a;
    if (a <=1){
        cout <<("Por favor debe ser un numero entero mayor a 1");
    }
    else{
        descomponer(a);
        cout << endl;
    }
    
}


int descomponer(int n){
    cout << n << " = ";
    int f_primo = 2;
    bool primero = true;
    while (n>1){
        if(n % f_primo == 0){
            if (primero == true){   
                primero = false;
            }
            else{
                cout <<"x";
            }
            cout << f_primo;
            n = n/f_primo;   
        }
        else{
            f_primo += 1;
        }
    }
    return 0;
} 


