#include <iostream>;
using namespace std;

int suma(int a, int b) {
	return a + b;
}

float division(int a, int b){
	return a/b;
}
void imprimirResultados(int rs, float rd) {
  cout << "Suma: " << rs << endl;
  cout << "Division: " << rd << endl;
}
int main() {
int rs;
float rd;
bool sw;
char valor [20];
double rp;
  rs=suma(5,6);
  rs = suma(5, 6);
  rd = 5.0 / 6; 

  imprimirResultados(rs,rd);

  return 0;
  
  
  
  
}

