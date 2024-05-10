#include <iostream>;
using namespace std;

float division(int a, float b){
  return a/b;
}

void imprimirResultados(bool sw, const char* valor) {
    cout << "Verificación: " << (sw ? "verdadero" : "falso") << endl;
    cout << "Valor: " << valor << endl;
}
int main() {
int rs;
float rd;
bool sw;
char valor [20];
double rp;
  rs=suma(5,6);
  rd=division(5,6);
  rp=proceso(rs,rd,3,33);
  sw=verificar(rp);
  string rp_str = doubleToString(rp);
  string datos_str = rp_str + " proceso";
   strncpy(valor, datos_str.c_str(), sizeof(valor)); 
   
   valor[sizeof(valor) - 1] = '\0';
  
  cout<<rs<<endl;
  cout<<rd<<endl;
  cout<<rp<<endl;
  cout << boolalpha << sw << endl; 
  cout<<valor<<endl;
  imprimirResultados(sw, valor);

    return 0;
  
  
}
