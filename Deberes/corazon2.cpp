#include <iostream>

using namespace std;

int suma(int a, int b) {
  return a + b;
}

void imprimirResultados(int rs) {
  cout << "Suma: " << rs << endl;
}

int main() {
  int rs;
  float rd;
  bool sw;
  char valor[20]; 
  double rp;

  rs = suma(5, 6);
  imprimirResultados(rs);

  return 0;
}