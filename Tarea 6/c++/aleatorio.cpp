#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;
int generador (){
    int num_aleatorio;
    srand(time(NULL));
    num_aleatorio = 1 + rand() % (11 - 1);
    return num_aleatorio;
}
int main(){
    int numgenerado = generador();
    int numusuario;
    char salir;
do{
    cout << "Adivina el numero del 0 al 10" << endl;
    cin >> numusuario;    
        if(numusuario < 0){
            cout<< "Dame solo numeros positivos"<< endl;
        }
        if(numusuario > 10){
            cout <<"no tiene que ser mayor a 10"<< endl;
        }
        if(numusuario>=0 && numusuario <=10){
            if(numusuario == numgenerado){
                cout <<"adivinaste felicidades"<< endl;
            }
            if(numusuario != numgenerado){
                cout <<"Ese no es el numero vuelve a intentar"<< endl;
            }
        }
cout <<"¿Quieres volver a intentar? S/N"<< endl;
cin >> salir;
}while(salir != 'n' && salir != 'N');

return 0;

}