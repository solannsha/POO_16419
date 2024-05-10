#include <iostream>
#include <string>

using namespace std;

//funcion division grupo 5
float division(float a,float b);

int suma(int a, int b) {
  return a + b;
}

void imprimirResultados(int rs) {
  cout << "Suma: " << rs << endl;
  cout<<"division"<<rd<<endl;
}
//Grupo 2 agraga Función para verificar el resultado del proceso
bool verificar(double rp) {
    return rp > 100;
}


int main() {
  int rs;
  float rd;
  bool sw;
  char valor[20]; 
  double rp;

  rs = suma(5, 6);
  rd= division(7.8,8.9);
  imprimirResultados(rs);
  imprimirResultados(rd);
  

  return 0;
}

float division(float a,float b){
  return a/b;
}