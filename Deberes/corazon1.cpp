#include <iostream>;
using namespace std;

//funcion suma grupo 5
int suma(int a,int b);

float division(int a, float b){
  return a/b;
}

int main() {
int rs;
float rd;
bool sw;
char valor [20];
double rp;
  rs=suma(89,49);
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
  
  
}

int suma(int a,int b){
    return a+b;
}
