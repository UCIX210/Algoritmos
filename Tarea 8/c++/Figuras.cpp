#include <iostream>
using namespace std;

void dibujarinicio();

void dibujarCirculo();
float F_areaCirculo();

void dibujarCuadrado();
float F_areaCuadrado();

void dibujarTriangulo();
float F_areaTriangulo();

bool numlet(string str);

/*///////////////////////////////////////////////////////////////////////////////////*/


int main(){
  dibujarinicio();
  string strfigura;
  bool q = true;
  do
  { 
    if (q == false)
    {
      cout <<"ERROR, no se admiten letras, ¿Cual figuara quieres calcular su area?: ";
    }
    cin>>strfigura;
    q=false;
  } while (numlet(strfigura) == false);


  int figura = stoi(strfigura);
  
  if (figura > 3 or figura <=0){
    cout<<"Dame solo numeros validos, puede ser 1, 2 o 3" <<endl; 
    }
  if (figura<=3 && figura>=1)
  {
    if (figura== 1)
    {
      dibujarCirculo();
      float areacirculo = F_areaCirculo();
      cout << "El area del Circulo es = " << areacirculo<<endl;
    }
    if (figura== 2)
    {
      dibujarCuadrado();
      float areacuadrado = F_areaCuadrado();
      cout << "El area del Cuadrado es = " << areacuadrado<<endl;
    }
    if (figura== 3)
    {
      dibujarTriangulo();
      float areatriangulo= F_areaTriangulo();
      cout << "El area del Triangulo es = " << areatriangulo<<endl;
    }
  }

}

/*///////////////////////////////////////////////////////////////////////////////////*/

void dibujarinicio(){
  cout <<""<<endl;
  cout <<"          *******                ***************************                  *  "<<endl;
  cout <<"      ***************            ***************************                 ***"<<endl;
  cout <<"    *******************          ***************************                *****"<<endl;
  cout <<"  ***********************        ***************************               *******"<<endl;
  cout <<" *************************       ***************************              *********"<<endl;
  cout <<"***************************      ***************************             ***********"<<endl;
  cout <<"***************************      ***************************            *************"<<endl;
  cout <<"***************************      ***************************           ***************"<<endl;
  cout <<" *************************       ***************************          *****************"<<endl;
  cout <<"  ***********************        ***************************         *******************"<<endl;
  cout <<"    *******************          ***************************        *********************"<<endl;
  cout <<"      ***************            ***************************       ***********************"<<endl;
  cout <<"          *******                ***************************      *************************"<<endl;
  cout <<""<<endl;
  cout <<"       Circulo = 1                       Cuadrado=2                    Triangulo=3  "<<endl;
  cout <<""<<endl;
  cout <<"¿Cual figuara quieres calcular su area?: ";
}

void dibujarCirculo(){
  cout <<""<<endl;
  cout <<"          ******* "<<endl;
  cout <<"      ***************    "<<endl;
  cout <<"    ******************* "<<endl;
  cout <<"  ***********************  "<<endl;
  cout <<" *************************  "<<endl;
  cout <<"*************************** "<<endl;
  cout <<"*************************** "<<endl;
  cout <<"*************|*************  "<<endl;
  cout <<"*************|*************  "<<endl;
  cout <<" ************R************   "<<endl;
  cout <<"  ***********|***********  "<<endl;
  cout <<"    *********|********* "<<endl;
  cout <<"      *******|******* "<<endl;
  cout <<"          ***|***     "<<endl;
  cout <<""<<endl;
  cout <<"Dame su Radio, R = ";
}

float F_areaCirculo (){
  float R;
  cin >>R;
  cout <<"Pi x Radio x Radio = ";
  cout <<"Pi x "<< R << " x "<< R <<endl;
  float areaR = 3.1416*R*R;
  return areaR;
}

void dibujarCuadrado(){
  cout << "" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "***************************" <<endl;
  cout << "--------------L------------" <<endl;
  cout << "" <<endl;
  cout <<"Dame su Lado, L = ";
}

float F_areaCuadrado(){
  float L;
  cin >>L;
  cout <<"Lado X Lado = ";
  cout << L << " x "<< L <<endl;
  float areaL = L*L;
  return areaL;
}

void dibujarTriangulo(){
  cout << "" <<endl;
  cout << "             * " <<endl;
  cout << "            *|*" <<endl;
  cout << "           **|**" <<endl;
  cout << "          ***|***" <<endl;
  cout << "         ****|****" <<endl;
  cout << "        *****|*****" <<endl;
  cout << "       ******|******" <<endl;
  cout << "      *******|*******" <<endl;
  cout << "     ********A********" <<endl;
  cout << "    *********|*********" <<endl;
  cout << "   **********|**********" <<endl;
  cout << "  ***********|***********" <<endl;
  cout << " ************|************" <<endl;
  cout << "*************|************* " <<endl;
  cout << "-------------B--------------" <<endl;
  cout << "" <<endl;
}

float F_areaTriangulo(){
  float A;
  float B;
  cout <<"Dame su Altura, A = ";
  cin >>A;
  cout <<"Dame su Base, B = ";
  cin >>B;
  cout <<"(Base x Altura)/2 = ";
  cout <<"("<< B << " x "<< A <<")"<<"/2"<<endl;
  float areaAB = (A*B)/2;
  return areaAB;
}


bool numlet(string str)
{
  for (char  c : str) {
    if (isdigit(c) == 0){
        return false;
    }
        
  }
  return true;
}