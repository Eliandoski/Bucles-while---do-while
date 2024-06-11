//Cifuentes Elian
//4) Ejercicio adivina el número correcto

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL)); 

    int intento = 3;
    int num_aleatorio;

    num_aleatorio = 1 + rand() % (50);

    cout << "Estoy pensando en un numero entre 1 y 50" << endl;

    while (intento > 0){

        int num_usuario;

        cout << "Ingresa tu numero: "; 
        cin >> num_usuario;
        

        if (num_aleatorio == num_usuario){
            cout<<endl<<"Felicidades! Ganaste una beca en la PUCE Esmeraldas"; return 0;
            //FALTA ROMPER EL BUCLE CON BREAK
        }else if (num_usuario < num_aleatorio){
            cout<<"El numero que ingresaste es: " << num_usuario << ",debes ingresar un numero mayor" << endl;
        }else{
            cout<<"El numero que ingresaste es: " << num_usuario << " ,debes ingresar un numero menor" << endl;
        }
                     
        intento--;

    }

    cout << endl <<"No conseguiste adivinar el número. El número era " << num_aleatorio;

    return 0;
}

