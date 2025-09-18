#include <iostream>
#include <cmath>

using namespace std;

void calcularAngulos(float a, float b, float c, float& anguloA, float& anguloB, float& anguloC) {
    if (a <= 0 || b <= 0 || c <= 0) {
        anguloA = anguloB = anguloC = 0.0;
        return;
    }

    float cosA = (b * b + c * c - a * a) / (2 * b * c);
    float cosB = (a * a + c * c - b * b) / (2 * a * c);
    float cosC = (a * a + b * b - c * c) / (2 * a * b);

    anguloA = acos(cosA) * 180.0 / M_PI;
    anguloB = acos(cosB) * 180.0 / M_PI;
    anguloC = acos(cosC) * 180.0 / M_PI;
}

int main() {
    float ladoA, ladoB, ladoC;
    float anguloA, anguloB, anguloC;

    cout << "Ingrese las dimensiones del triangulo:" << endl;
    cout << "Lado A: ";
    cin >> ladoA;
    cout << "Lado B: ";
    cin >> ladoB;
    cout << "Lado C: ";
    cin >> ladoC;

    calcularAngulos(ladoA, ladoB, ladoC, anguloA, anguloB, anguloC);

    if (anguloA == 0.0 && anguloB == 0.0 && anguloC == 0.0) {
        cout << "El triangulo no existe." << endl;
    } else {
        cout << "Angulo A: " << anguloA << " grados" << endl;
        cout << "Angulo B: " << anguloB << " grados" << endl;
        cout << "Angulo C: " << anguloC << " grados" << endl;
    }

    return 0;
}

