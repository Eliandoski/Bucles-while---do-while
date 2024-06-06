//Cifuentes Elian
/*6) Modifique el ejercicio #4 (adivina el número) para que la terminación del mismo NO sea la sentencia break, sino una variable booleana. 
De la siguiente forma:
bool adivinaste=false;
do{
   línea código 1;
    línea código 2;
     línea código n;
    if ( num < aleatorio)
        {........; } 
   else if (num > aleatorio)
       { ...........; }
    else {
              adivinaste = true;
              .........; 
       }
}  while(oportunidades<=3 && adivinaste==false);
if(adivinaste)

    cout<<MENSAJE_DE_FELICITACION
else
   cout<<MENSAJE_DE_FIN_DE JUEGO*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int intento = 1;
    int num_aleatorio = 1 + rand() % 50;
    bool adivinaste = false;

    cout << "Estoy pensando en un numero entre 1 y 50" << endl;

    do {
        int num_usuario;
        cout << "Ingresa tu numero: ";
        cin >> num_usuario;

        if (num_usuario < num_aleatorio) {
            cout << "El numero que ingresaste es " << num_usuario << ", debes ingresar un numero mayor" << endl;
        } else if (num_usuario > num_aleatorio) {
            cout << "El numero que ingresaste es " << num_usuario << ", debes ingresar un numero menor " << endl;
        } else {
            adivinaste = true;
        }

        intento++;

    } while (intento <=3 && adivinaste==false);

    if (adivinaste) {
        cout << endl << "Felicidades! Ganaste una beca en la PUCE Esmeraldas" << endl;
    } else {
        cout << endl << "No conseguiste adivinar el número. El número era " << num_aleatorio << endl;
    }

    return 0;
}


