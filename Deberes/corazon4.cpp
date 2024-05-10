/* UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
PROBLEMA: MAIN CON FUNCIONES Y SUBIR A GITHUB
AUTOR: NRC16419
FECHA DE CREACION: 09/05/2024
FECHA DE MODIFICACION: 10/05/2024*/
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

//Grupo 5 Funcion String 
string cadenaPrueba(string nombre);


int suma(int a, int b) {
    return a + b;
}


float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: División por cero." << endl;
        return 0;
    }
}

//G4: Func 3
double proceso(int rs, float rd, int a, int b) {
    double resp1, resp2;
    if (rd != 0) {
        resp1 = 4 * (rs - a) + (5 + b / rd);
        return resp1;
    } else {
        resp2 = -7 * (b + rd) + 4 * (a * rs + 2);
        return resp2;
    }
}

int main() {
    int rs;
    int x = 25, y = 30;
    float rd; 
    bool sw; 
    string nombre = "Juan";
    double rp;
    
    rs = suma(x, y);
    rd = division(3, 6); 
    rp = proceso(rs, rd, 3, 33);

    string datos_str = "15 suma";
    char valor[20];
    strcpy(valor, datos_str.c_str());

    int respusuma = suma(x, y);

    cout << "La suma de " << x << " y " << y << " es " << respusuma << endl;
    cout << rd << endl;
    cout << rp << endl;
    cout << sw << endl;
    cout << valor << endl;
    cout << cadenaPrueba(nombre) << endl;

    return 0;
}


string cadenaPrueba(string nombre) {
    return nombre + " universidad espe";
}

