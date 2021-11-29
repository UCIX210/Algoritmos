#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;
void ImprimirMatriz(int m[12][5],int,int);
int enacientos(int m[12][5],int,int);
int main()
{   
    int matriz[12][5]={};
    srand(time(NULL));
    for (int i = 0; i < 12; i++)
    {
        for (int o = 0; o < 5; o++)
        {
            matriz[i][o]= 0 + rand() % (2 - 0);
            
        }
        
    }
    

    ImprimirMatriz(matriz,12,5);
    float na = enacientos(matriz,12,5);
    float procentaje = (na/60)*100;
    cout <<"Asientos ocupados: "<<na<<endl;
    cout <<"Porcentaje de ocupación: "<<procentaje<<"%"<<endl;
    cout <<"Clasificación: ";
    if (procentaje<35)
    {
        cout <<"Mala"<<endl;
    }
    if (procentaje>=35 and procentaje<=75)
    {
        cout <<"Regular"<<endl;
    }
    if (procentaje>75)
    {
        cout <<"Buena"<<endl;
    }
    
}


void ImprimirMatriz(int m[12][5],int, int){
    cout<<"           Piloto"<<endl;
    for (int i = 0; i < 12; i++)
    {
        for (int o = 0; o < 5; o++)
        {
            cout<<m[i][o]<<"  ";
        }
        cout<<endl;
    }
    
}

int enacientos(int m[12][5],int,int){
    int n1 =0;
    for (int i = 0; i < 12; i++)
    {
        for (int o = 0; o < 5; o++)
        {
            if (m[i][o]==1)
            {
                n1=n1+1;
            }
        }
        
    }
    return n1;
}