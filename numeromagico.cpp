#include "iostream"
#include "time.h"
#include "stdlib.h"

using namespace std;

    int main (void) {
      int x;
      int adivinado=0;
      int num;
      int intentos=0;

      srand((unsigned)time (NULL));
      x=1 + rand() % 100;

      while (adivinado==0){
        cout<<"ingrese un numero al azar del 1 al 100: "<<endl;
        cin>>num;

        if (num>=1 && num<=100){
          intentos= intentos + 1;

          if (num>x){
            cout<<"el numero es menor intenta otro: ";
            cout<<endl;
          }else if (num<x){
            cout<<"el numero es mayor intenta otro: ";
            cout<<endl;
          }else {
            cout<<"Adininaste el numero FELICIDADES!! "<<intentos<< " intentos "<<endl;
            adivinado = 1;
          }
        
        }else {
          cout<<"NUMERO NO RECONICIDO INTENTE OTRO DENTRO DEL RANGO: ";
          cout<<endl;
        }
      }
      return 0;

    }

