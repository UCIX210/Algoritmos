#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;
void ImprimirMatriz(int m[4][4],int,int);
int estacion1(int m[4][4],int,int);
void estaciones(int m[4][4],int,int);
int main()
{   
    int matriz[4][4]={};
    srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        for (int o = 0; o < 4; o++)
        {
            if ((i==0 and o==0) or (i==1 and o==1) or (i==2 and o==2) or (i==3 and o==3))
            {
                matriz[i][o]=0;
            }
            else
            {
                matriz[i][o]= 0 + rand() % (2 - 0);
            }
            
        }
        
    }
    

    ImprimirMatriz(matriz,4,4);
    int e1 = estacion1(matriz,4,4);
    cout <<"E1 = "<<e1<<endl;
    estaciones(matriz,4,4);
}


void ImprimirMatriz(int m[4][4],int, int){
    cout<<"           E1 E2 E3 E4"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Estación"<<i+1<<"  ";
        for (int o = 0; o < 4; o++)
        {
            cout<<m[i][o]<<"  ";
        }
        cout<<endl;
    }
    
}

int estacion1(int m[4][4],int,int){
    int n1 =0;
    for (int i = 0; i < 4; i++)
    {
        if (m[i][0]==1)
        {
            n1=n1+1;
        }
    }
    return n1;
}

void estaciones(int m[4][4],int,int){
    cout<<"Estaciones 1: ";
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    for (int i = 0; i < 4; i++)
    {
        if (m[0][i]==1)
        {
            cout<<i+1<<", ";
            n1++;
        }
    }
    if (n1==0)
    {
        cout<<"NA";
    }
    
    cout<<endl;

    cout<<"Estaciones 2: ";
    for (int i = 0; i < 4; i++)
    {
        if (m[1][i]==1)
        {
            cout<<i+1<<", ";
            n2++;
        }
    }
    if (n2==0)
    {
        cout<<"NA";
    }
    
    cout<<endl;

    cout<<"Estaciones 3: ";
    for (int i = 0; i < 4; i++)
    {
        if (m[2][i]==1)
        {
            cout<<i+1<<", ";
            n3++;
        }
    }
    if (n3==0)
    {
        cout<<"NA";
    }
    
    cout<<endl;

    cout<<"Estaciones 4: ";
    for (int i = 0; i < 4; i++)
    {
        if (m[3][i]==1)
        {
            cout<<i+1<<", ";
            n4++;
        }
    }
    if (n4==0)
    {
        cout<<"NA";
    }
    
    cout<<endl;
}