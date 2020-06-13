#include "iostream"
#include "math.h"

using namespace std;

    int main (void) {
        int year;
        cout<<endl;
        cout<<"caculo de anio bisiesto"<<endl;
        cout<<"por favor ingrese su anio"<<endl;
        cin>> year;

        if (year % 400 == 0){
          cout<< "es bisiesto"<< endl;
        } else if (year % 4 == 0 && year % 100!=0){
          cout<< "es bisiesto"<<endl;
        }else {
          cout<<"no es bisiesto"<<endl;
        }

        
    

        return 0;
        
    }

