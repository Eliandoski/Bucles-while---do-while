//Cifuentes Elian
/*5) Se lee un número por teclado que representa una tabla de multiplicar. Imprima los resultados de la tabla de multiplicar desde el 1 al 12.
Use un bucle do..while para que se impriman varias tablas de multiplicar. El bucle termina cuando el usuario ingresa como tabla el número cero.*/
#include <iostream>
using namespace std;

int main() {

    int num;
    
    do {
        cout << "Ingrese un número para la tabla de multiplicar: ";
        cin >> num;
        
        if (num != 0) {
            int k = 1;

            while (k <= 12) {
                cout << num << " x " << k << " = " << num * k << endl;
                k++;
            }
        }
    } while (num != 0);
    
    cout << "Finalizado" << endl;
    return 0;
}


