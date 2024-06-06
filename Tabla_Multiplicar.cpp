//Cifuentes Elian
//2) Tabla de multiplicar desde el 12 al 1

#include <iostream>

using namespace std;

int main(){

    int n;
    
    cout << endl << "Ingresa el número de la tabla de multipliar: "; 
    cin >> n;
    
    int k = 12;

    while (k >= 1)
    {
        cout << endl << n << " x " << k << " = " << n * k;
        k--;
    }

    return 0;
}