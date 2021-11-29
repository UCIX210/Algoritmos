#include <iostream>
using namespace std;
int main()
{
    char salir;
    do
    {   
        float consumo;
        char zona;
        float pagar;
        float costo1;
        float costo2;
        float costo3;


        cout<<"Dame tu zona A, B o C?: ";
        cin>>zona;
        /////////////////////////////Zonas
        if (zona=='A' or zona=='a')
        {
            costo1 =1.2;
            costo2 =1.8;
            costo3=2.4;
        }
        if (zona=='B' or zona=='b')
        {
            costo1 =1.3;
            costo2 =1.9;
            costo3=2.6;
        }
        if (zona=='C' or zona=='c')
        {
            costo1 =1.4;
            costo2 =2;
            costo3=2.8;
        }
/////////////////////////////////////////////////zonas
        cout<<"Dame el consumo: ";
        cin>>consumo;
        if (consumo<75)
        {
            pagar=consumo*costo1;
            cout<<"El totoal a pagar es: "<<consumo<<"kWh * "<<costo1<<" = $" <<pagar<<endl;
        }
        if (consumo>=75 and consumo<=150)
        {
            pagar=consumo*costo2;
            cout<<"El totoal a pagar es: "<<consumo<<"kWh * "<<costo2<<" = $" <<pagar<<endl;
        }
        if (consumo>150 and consumo<=500)
        {
            pagar=consumo*costo3;
            cout<<"El totoal a pagar es: "<<consumo<<"kWh * "<<costo3<<" = $" <<pagar<<endl;
        }
        if (consumo>500)
        {
            pagar=(consumo*(costo3+1))+(100*costo3);
            cout<<"El totoal a pagar es: ("<<consumo<<"kWh * ("<<costo3<<"+1)) + (100*"<<costo3<<") = $"<<pagar<<endl;
        }


        cout <<"¿Quieres salir? S/N"<< endl;
        cin >> salir;
    } while (salir != 's' && salir != 'S');

}