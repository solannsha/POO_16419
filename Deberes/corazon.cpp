//Corazon 1
//UNIVERSIDAD DE LAS FUERZAS ARMADAS
#include <iostream>;
using namespace std;

int suma(int a, int b){
  return a+b;
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
