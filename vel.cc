#include <iostream>
using namespace std;
int main (){
  
  float d=0, t=0, v=0;
 
 cout<<"¿Cuántos kilómetros has recorrido?"<<endl; cin>>d;
 cout<<"¿Cuántas horas te tardaste?"<<endl; cin>>t;
 
  v= d/t;
  
  cout<<"Tu velocidad promedio ha sido de "<< v<< " kilómetros por hora.";
  
  
  return 0;
  
}
