//Hacer una funci�n que diga el n�mero de cifras que tiene un n�mero entero, despu�s un programa que utilice esta funci�n
//solicitando recurrentemente n�meros al usuario con el fin de informarle el n�mero de cifras de los n�meros ingresados, se deber�
//validar en cada ocasi�n sdi el n�mero es decimal o no, solo si el n�mero es entero el programa deber� responder cuantas cifras tiene

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Funci�n para contar el n�mero de cifras en un n�mero entero
int contarCifras(int numero) {
    if (numero == 0) {
        return 1; // Si el n�mero es cero, tiene una sola cifra
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

        // Verificar si el usuario ha ingresado un n�mero entero
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

