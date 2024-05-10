/* UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
PROBLEMA: MAIN CON FUNCIONES Y SUBIR A GITHUB
AUTOR: NRC16419
FECHA DE CREACION: 09/05/2024
FECHA DE MODIFICACION: 10/05/2024*/
#include <iostream>
#include <cstring>

using namespace std;

//Grupo 5 Funcion Division
float division(float a,float b);

int suma(int a, int b) {
  return a + b;
}

void imprimirResultados(int rs,float rd) {
  cout << "Suma: " << rs << endl;
  cout<<"la division es:"<<rd<<endl;
  
}
//grupo 2 agrega funcion para manejar caracteres 
void manejarCadena(char* valor, const string& datos_str) {
    strcpy(valor, datos_str.c_str());
}

//Grupo 1 agrega funcion proceso
double proceso(int a, float b, double c) {
	return (a * b) / c;
}

int main() {
  int rs;
  float rd;
  bool sw;
  char valor[20]; 
  double rp;

  rs = suma(5, 6);
  rd= division(7.8,8.9);
  imprimirResultados(rs,rd);
  rp=proceso(rs,rd,8.30120490123);
  string datos_str= ("15 Suma");
  manejarCadena(valor, datos_str);
  cout << valor << endl;

  return 0;
}

float division(float a,float b){
  return a/b;
}
