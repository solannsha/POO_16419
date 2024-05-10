//Corazon 1
/* UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
PROBLEMA: MAIN CON FUNCIONES Y SUBIR A GITHUB
AUTOR: NRC16419
FECHA DE CREACION: 09/05/2024
FECHA DE MODIFICACION: 10/05/2024*/
#include <iostream>;
#include <cstring>
using namespace std;

int suma(int a, int b){
  return a+b;
} 

// Grupo 2 Agrega Función dividir 
float division(float a, float b){
    return a / b;
}
//Grupo 5 funcion double 
double proceso(int a, float b, double c) {
    return (a + b) / c;
}

bool verificar(double rp) {
    return rp > 10;
}

void imprimirResultados(bool sw,double rp) {
    if (sw) {
        cout << "Verificación: verdadero" << endl;
    } else {
        cout << "Verificación: falso" << endl;
    }
    cout<<"El resultado del proceso es:"<<rp<<endl;
}



// Grupo 3 funcion booleana
bool verificar(float num1){
	
	int num2;
	num2 = num1;
	
	if((num1 - num2) == 0){
		return false;
	}else{
		return true;
	}
}



int main() {
 int rs;
    float rd;
    bool sw;
    char valor [20];
    double rp;
    rs = suma(4,7);
    rd = division(5.7,6.9);
    rp = proceso(rs, rd, 8);
    sw = verificar(rp);
    string datos_str = "15 suma"; 
    strcpy(valor, datos_str.c_str()); 
    cout << rs << endl;
    cout << rd << endl;
    cout << rp << endl;
    cout << sw << endl;
    cout << valor << endl;
    imprimirResultados(sw, rp);
  return 0;
  
  

}


