//Corazon 1
//UNIVERSIDAD DE LAS FUERZAS ARMADAS
#include <iostream>;
using namespace std;

<<<<<<< HEAD
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
=======
//grupo 5 funcion double 
double proceso(int a, float b, double c);
int suma(int a, int b){
  return a+b;
} 
//grupo 3 agrega funcion float
float division(int a, float b){
  return a/b;
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

>>>>>>> 9bdccfa3b84d87f3ed5d1acf73a89fea9f97331c
int main() {
int rs;
float rd=5.1;
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
  
<<<<<<< HEAD
  sw = verificar(rp);

    
    imprimirResultados(sw);

    return 0;
  
  
=======
}

double proceso(int a, float b, double c) {
    return (a + b) / c;
>>>>>>> 9bdccfa3b84d87f3ed5d1acf73a89fea9f97331c
}
