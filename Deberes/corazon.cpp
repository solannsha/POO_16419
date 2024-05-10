//Corazon 1
//UNIVERSIDAD DE LAS FUERZAS ARMADAS
#include <iostream>;
using namespace std;

bool verificar(double x) {
    return x > 10;
}

void imprimirResultados(bool sw) {
    if (sw) {
        cout << "Verificación: verdadero" << endl;
    } else {
        cout << "Verificación: falso" << endl;
    }
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
  string datos_str = "15 suma"; 
  strcpy(valor, datos_str.c_str()); 
  cout<<rs<<endl;
  cout<<rd<<endl;
  cout<<rp<<endl;
  cout<<sw<<endl;
  cout<<valor<<endl;
  
  sw = verificar(rp);

    
    imprimirResultados(sw);

    return 0;
  
  
}
