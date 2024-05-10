/* UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
PROBLEMA: MAIN CON FUNCIONES Y SUBIR A GITHUB
AUTOR: NRC16419
FECHA DE CREACION: 09/05/2024
FECHA DE MODIFICACION: 10/05/2024*/
#include <iostream>;
using namespace std;

double proceso(int rs, float rd, int a, int b);
//G4: Func 3
double proceso(int rs, float rd, int a, int b){
	double resp1, resp2;
	if (rd!=0){
		resp1= 4*(rs-a)+(5+b/rd);
		return resp1;
	}else {
		resp2=-7*(b+rd)+4*(a*rs+2);
		return resp2;
	}
}

int main() {
int rs(x,y) ;
int x=25, y=30;
float rd;
bool sw;
char valor [20];
double rp;
  rs=suma(x,y);
  rd=division(3,6);
  rp=proceso(rs,rd,3,33);
  sw=verificar(rp);
  string datos_str = "15 suma"; 
  strcpy(valor, datos_str.c_str()); 
  int respusuma=rs(x,y);
 std::cout << "La suma de " << num1 << " y " << num2 << " es " << respusuma << std::endl;
  cout<<rd<<endl;
  cout<<rp<<endl;
  cout<<sw<<endl;
  cout<<valor<<endl;
  
  
}

