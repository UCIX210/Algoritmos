#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    const char *Bimestres [6]= {"1 Bimestre", "2 Bimestre", "3 Bimestre", "4 Bimestre", "5 Bimestre", "6 Bimestre"};
    int autos[6] = {};
    float incremento[5]={};
    cout<<"Dame los autos de los sigueintes Bimestres: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<Bimestres[i]<<": ";
        cin>>autos[i];
    }

/////////////////////////////////////////////////////////////////////////////////////////////

    int max = autos[0];
    int min = autos[0];
    int Amaxin = 0;
    int Amin = 0;
    for (int i = 0; i < 6; i++){
        if (max<autos[i]){
            max = autos[i];
            Amaxin = i+1;
        }
        if (min>autos[i]){
            min = autos[i];
            Amin = i+1;
        }   
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for(int i = 0; i < 5; i++){
        float actual = autos[i+1];
        float anterior = autos[i];
        incremento[i] = (actual-anterior)/anterior;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    float maxin = incremento[0];
    float minin = incremento[0];
    int Bmaxin = 0;
    int Bmin = 0;

    for (int i = 0; i < 5; i++){
        if (maxin<incremento[i]){
            
            maxin = incremento[i];
            Bmaxin = i+2;
        }
        if (minin>incremento[i]){
            minin = incremento[i];
            Bmin = i+2;
        }   
    }

////////////////////////////////////////////////////////////////////
    float prom;
    float total;
    for (int i = 0; i < 6; i++)
    {
        total=autos[i]+total;
    }
    prom=total/6;
    /////////////////////////////////////////////////////////////////////////////////////////
    cout <<"-------------------------"<<endl;
    for (int i = 0; i < 6; i++)
    {
        if (i==0)
        {
            cout<<Bimestres[0]<<" | "<<autos[0]<<" | " << "NA"<<endl;
        }
        else{
            cout<<Bimestres[i]<<" | "<<autos[i]<<" | " << incremento[i-1]*100<<"%"<<endl;
        }
    }
    cout <<"-------------------------"<<endl;
    cout <<"     Ventas:"<<endl;
    cout<<"El bimestres con mas autos ventidos fue el: "<<Amaxin<<" ("<<max<<")"<<endl;
    cout<<"El bimestres con menos autos ventidos fue el: "<<Amin<<" ("<<min<<")"<<endl;
    cout<<"El promedio de autos fue de: "<<prom<<endl;
    cout <<"-------------------------"<<endl;
    cout <<"     Incremento:"<<endl;
    cout<<"Mayor incremento en el Bimestre: "<<Bmaxin<<" ("<<maxin*100<<"%)"<<endl;
    cout<<"Menor incremento en el Bimestre: "<<Bmin<<" ("<<minin*100<<"%)"<<endl;





    return 0;
}



