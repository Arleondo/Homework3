#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Ingresar un número n: ";
    cin>>x;
    if (x > 0) {
        int contador = 0;
        int num = 2;
        while (contador < x) {
            int divisor = 2;
            bool esPrimo = true;
            while (divisor * divisor <= num) {
                if (num % divisor == 0) {
                    esPrimo = false;
                    break;
                }
                divisor++;
                contador++;
            }
            if (esPrimo) {
                cout <<num<<" ";
                contador = contador + 1;
            }
            num = num+1;
        }
        cout<<endl;
    } else {
        cout<<"El número debe ser mayor que cero."<<endl;
    }
    return 0;
}