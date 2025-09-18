//Hacer una función que diga el número de cifras que tiene un número entero, después un programa que utilice esta función
//solicitando recurrentemente números al usuario con el fin de informarle el número de cifras de los números ingresados, se deberá
//validar en cada ocasión sdi el número es decimal o no, solo si el número es entero el programa deberá responder cuantas cifras tiene

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Función para contar el número de cifras en un número entero
int contarCifras(int numero) {
    if (numero == 0) {
        return 1; // Si el número es cero, tiene una sola cifra
    }

    int cifras = 0;
    while (numero != 0) {
        numero /= 10;
        cifras++;
    }

    return cifras;
}

int main() {
    int numero;

    while (true) {
        cout << "Ingrese un numero entero (o ingrese 0 para salir): ";
        cin >> numero;

        // Verificar si el usuario ha ingresado un número entero
        if (cin.fail() || cin.peek() != '\n') {
            cout << "Error: Debe ingresar un numero entero valido." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            if (numero == 0) {
                break; // Salir del bucle si se ingresa 0
            }

            int cifras = contarCifras(abs(numero));
            cout << "El numero tiene " << cifras << " cifra(s)." << endl;
        }
    }

    return 0;
}

