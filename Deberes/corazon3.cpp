/* UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
PROBLEMA: MAIN CON FUNCIONES Y SUBIR A GITHUB
AUTOR: NRC16419
FECHA DE CREACION: 09/05/2024
FECHA DE MODIFICACION: 10/05/2024*/
#include <iostream>
#include <cmath>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

float division(int a, int b) {
    return a / b;
}

double proceso(int rs, float rd, int a, int b) {
    return rs * rd * a * b;
}

//Grupo 5 Funcion verificar
bool verificarDivision(float a) {
    return a > M_PI;
}

void imprimirResultados(int rs, float rd, bool sw, double rp) {
    cout << "Suma: " << rs << endl;
    cout << "Division: " << rd << endl;
    if (sw) {
        cout << "La division es mayor a pi." << endl;
    } else {
        cout << "La division no es mayor a pi." << endl;
    }
}

int main() {
    int rs;
    float rd;
    bool sw = false;
    double rp;

    rs = suma(5, 6);
    rd = 5.0 / 6;
    sw = verificarDivision(rd);
    rp = proceso(rs, rd, 5, 6);

    imprimirResultados(rs, rd, sw, rp);

    return 0;
}

