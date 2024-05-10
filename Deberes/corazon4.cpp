#include <iostream>;
using namespace std;

double proceso(int rs, float rd, int a, int b);
//G4: 3era Func, 5to Programa
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
