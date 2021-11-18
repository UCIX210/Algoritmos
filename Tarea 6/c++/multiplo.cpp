#include <iostream>
using namespace std;

int descomponer(int n);


int main(){
    int a;
    cout << "Dame un numero entero mayor a 0: ";
    cin >> a;
    if (a <=0){
        cout <<"Por favor debe ser un numero entero mayor a 0" << endl;
        exit (EXIT_FAILURE);
    }
    if (a >100){
        cout <<"No hay multiplos en los primeros 100 numeros" << endl;
    }
    else{
        descomponer(a);
        cout << endl;
    }
    
}


int descomponer(int n){
    bool primero = true;
    int t =3;
    for (int i = 1; i <=100; i++)
    {
       if ( i % n ==0 and t==3){
           if (primero == false){
               cout << " ," << i;
           }
           if (primero){
               primero = false;
               cout << i;
           }
           
       }
       
    }
} 


