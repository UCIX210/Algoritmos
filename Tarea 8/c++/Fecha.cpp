#include <iostream>

using namespace std;
void day(int d);
void  meses(int m);

int main()
{
    int d;
    int m;
    cout<<"Dame un número entre el 1 y el 7: ";
    cin >> d;
    if (d<1 or d>7)
    {   
        cout<<"ERROR, numero invalido"<<endl;
    }
    else
    {
        cout<<"Dame un número entre el 1 y el 12: ";
        cin >> m;
        if (m<1 or m>12){
            cout<<"ERROR, numero invalido"<<endl;
        }
        else{
            day(d);
            meses(m);
        }
    }
    
    
    return 0;
}

void day(int d){
    const char *week [7]= {"Lunes", "Martes", "Miercoles", "Jueves", "VIernes", "Sabado", "Domingo"};
    cout<<week[d-1]<<", ";
}
void meses(int m){
    const char *mes [12]= {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "JUlio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    cout<<mes[m-1]<<endl;
}
