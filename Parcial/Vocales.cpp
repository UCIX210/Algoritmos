#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;
int main()
{
    int an ,en,in,on,un;
    an=en=in=on=un=0;
    char moda[5]={};
    bool primero=true;
    char caracter[100]={};
    int num_aleatorio[100] = {};
    int Porcentaje;
    int max;
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        num_aleatorio[i] = 97 + rand() % (123 - 97);
        caracter[i]=num_aleatorio[i];
        cout<<caracter[i]<<", ";
    }
    for (int i = 0; i < 100; i++)
    {        
        switch (num_aleatorio[i])
        {
        case 97:
            an++;
            break;
        
        case 101:
            en++;
            break;

        case 105:
            in++;
            break;

        case 111:
            on++;
            break;
        case 117:
            un++;
            break;
        }
    }

    if (an>=en and an>=in and an>=on and an>=un)
    {
        moda[0]='a';
        max=an;
    }
    if (en>=an and en>=in and en>=on and en>=un)
    {
        moda[1]='e';
        max=en;
    }
    if (in>=an and in>=en and in>=on and in>=un)
    {
        moda[2]='i';
        max=in;
    }
    if (on>=an and on>=en and on>=in and on>=un)
    {
        moda[3]='o';
        max=on;
    }
    if (un>=an and un>=en and un>=in and un>=on)
    {
        moda[4]='u';
        max=un;
    }

    Porcentaje=an+en+in+on+un;

    cout<<endl;
    cout<<endl;
    cout<<"-----"<<endl;
    cout<<"V |"<<"n"<<endl;
    cout<<"-----"<<endl;
    cout<<"a | "<<an<<endl;
    cout<<"e | "<<en<<endl;
    cout<<"i | "<<in<<endl;
    cout<<"o | "<<on<<endl;
    cout<<"u | "<<un<<endl;
    cout<<"-----"<<endl;
    cout<<endl;
    cout<<"La moda es: ";
    for (int i = 0; i < 5; i++)
    {
        if (moda[i]!=0)
        {
            cout<< moda[i];
            primero=false;
        }
        
        if (moda[i+1]!=0 and i<4 and primero==false)
        {
            cout<< ", ";
        }
    
    }
    cout<<" ("<<max<<")"<<endl;
    cout <<"El porcentaje: " << Porcentaje<< " %"<<endl;
    return 0;

}
