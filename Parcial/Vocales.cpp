#include <iostream>
#include <cstdlib>
#include<time.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int an ,en,in,on,un;
    an=en=in=on=un=0;
    char moda;
    char modas[5]={};
    char caracter[100]={};
    int num_aleatorio[100] = {};
    int promedio;

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
            an=an+1;
            break;
        
        case 101:
            en=en+1;
            break;

        case 105:
            in=in+1;
            break;

        case 111:
            on=on+1;
            break;
        case 117:
            un=un+1;
            break;
        }
    }

    if (an>en and an>in and an>on and an>un)
    {
        moda='a';
    }
    else if (en>an and en>in and en>on and en>un)
    {
        moda='e';
    }
    else if (in>an and in>en and in>on and in>un)
    {
        moda='i';
    }
    else if (on>an and on>en and on>in and on>un)
    {
        moda='o';
    }
    else if (un>an and un>en and un>in and un>on)
    {
        moda='u';
    }
    
    
    promedio=an+en+in+on+un;

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
    cout<<moda<<endl;
    cout <<"El porcentaje: " << promedio<< " %"<<endl;
    return 0;

}