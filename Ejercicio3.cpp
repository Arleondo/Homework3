#include <iostream>
#include <string>
using namespace std;

int main (){
    int aux=1;
    int ini=0;
    int x;
    cout<<"cuantos numeros de la secuencia fibonacci quiere: "<<endl;
    cin>>x;
    cout<<"estos son los numeros fibonacci hasta el "<<x<<" : ";
    for(int i= 1; i<=x; i++) {
      cout <<" ["<<ini<<"] ";
      aux = aux+ini; 
      ini = aux - ini;
    }
}