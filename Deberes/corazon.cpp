//Corazon 1
#include <iostream>;
using namespace std;

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
  
  
}