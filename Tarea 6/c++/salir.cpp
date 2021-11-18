#include <iostream>
using namespace std;
int main(){
char salir;
do
{
    const char *week [7]= {"Lunes", "Martes", "Miercoles", "Jueves", "VIernes", "Sabado", "Domingo"};
    cout<<week[0];
    cout <<"¿Quieres salir? S/N"<< endl;
    cin >> salir;
} while (salir != 's' && salir != 'S');

}