//Cifuentes Elian
//7)  Diseñe el programa que usando un bucle while, imprima 100 números aleatorios comprendidos entre 15 y 120
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); 

    int cont = 0;

    cout << "100 numeros aleatorios entre 15 y 120:" << endl;

    while (cont < 100) {
        int num_aleatorio = 15 + rand() % 106;

        cout << num_aleatorio << " " << endl;

        cont++;
    }

    return 0;
}
