//Cifuentes Elian
//3) Tabla de multiplicar, bucle do while

#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<endl<<"Ingresa el número de la tabla de multipliar: "; 
    cin >> n;
    
    int k = 12;

    do
    {
        cout << endl << n <<" x " << k <<" = " << n * k;
        k--;

    } while (k >= 1);
    
    return 0;
}