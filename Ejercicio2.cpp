#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    cout<< "Ingrese n : ";
    cin>>x;
    unsigned long long contador=1;
    int i=1;
    while (i<=x){
        unsigned long long sum=1; 
        for (unsigned long long i=2; i*i<=contador; i++) {
            if (contador%i==0) {
                sum=sum+i;
                if (i!=contador/i) {
                    sum += contador/i;
                }
            }
        }
        if (contador==sum){
            cout<< contador << "; ";
            contador=contador+1;
            i=i+1;
            }
        contador=contador+1;
    }
    return 0;
}