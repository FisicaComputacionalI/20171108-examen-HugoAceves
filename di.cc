#include<iostream>

using namespace std;

int main()
{
  int x;
  x=1;
  while(x<=5){
    if(x%3==0){
      x=x+2;}
    else{
      cout<<"x="<<x<<endl;
      x=x+2;}
  }
  //Estas líneas no están descritas en el digrama de flujo.
  /* while(x>5){
    cout<<"x="<<x<<endl;
    cin>>x;
    }*/

  return 0;
}
