#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    const char *week [7]= {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    int casos[7] = {};
    float incremento[7]={};
    cout<<"Dame los casos de los sigueintes dias: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<week[i]<<": ";
        cin>>casos[i];
    }

/*///////////////////////////////////////////////////////////////////////////////////////////*/

    int max = casos[0];
    int min = casos[0];

    for (int i = 0; i < 7; i++){
        if (max<casos[i]){
            max = casos[i];
        }
        if (min>casos[i]){
            min = casos[i];
        }   
    }

/*////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
    incremento[0]=0;
    for(int i = 1; i < 7; i++){
        float actual = casos[i];
        float anterior = casos[i-1];
        incremento[i] = (actual-anterior)/anterior;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    float prom;
    float total;
    for (int i = 0; i < 7; i++)
    {
        total=casos[i]+total;
    }
    prom=total/7;
    /////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < 7; i++)
    {
        if (i==0)
        {
            cout<<week[0]<<" | "<<casos[0]<<" | " << "NA"<<endl;
        }
        else{
            cout<<week[i]<<" | "<<casos[i]<<" | " << incremento[i]*100<<"%"<<endl;
        }
    }
    cout<<"Los casos maximos fueron:"<<max<<endl;
    cout<<"Los casos minimos fueron:"<<min<<endl;
    cout<<"El promedio de casos fue: "<<prom<<endl;


    return 0;
}



