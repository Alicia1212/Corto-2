#include "iostream"
#include "math.h"

using namespace std;
int main(void){
  int i;
  int numempleados=1;
  int horastrabajo=2;
  int horasextras=3;
   cout<<"ingrese el numero de empleados"<<endl;
   cin>>numempleados;

   for (i=0;i<numempleados;i++){
     cout<<"ingreses las horas trabajadas"<<endl<<endl;
     cin>>horastrabajo;
     cout<<"ingrese las horas extras"<<endl;
     cin>>horasextras;
     cout<<"su salario total es: "<< endl << (horastrabajo * 1.75) + (horasextras * 2.50)<<endl;
     cout<< "su salario real es de: "<< endl << (horastrabajo * 1.75 + horasextras * 2.50) - ((horastrabajo * 1.75 + horasextras * 2.50) * 0.04) - ((horastrabajo * 1.75 + horasextras * 2.50) * 0.0625) << endl;   
   

    
   }
   
   return 0;

}
