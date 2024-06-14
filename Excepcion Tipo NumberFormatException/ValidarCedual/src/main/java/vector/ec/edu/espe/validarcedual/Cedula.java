package vector.ec.edu.espe.validarcedual;

public class Cedula {
        
        public int[] convertirString(String cedula){
            
            char number;
            int vec[]= new int[10];
            
            try{
                
                for(int i=0;i<10;i++){
                    number = cedula.charAt(i);
                    vec[i] = Integer.parseInt(Character.toString(number));
                }
            }catch(NumberFormatException ex){
            
                System.out.println("El numero de cedula no es valido!!!!!!");
                System.exit(0);
                
            }
            
            
            return vec;
        }
    
        public String verificar(int vector[]){
        
        int svp=0, r, svi=0, tot;
        
        for(int i=0;i<9;i+=2){ 
            
            r = vector[i]*2;
         
            if(r>9){
                r -= 9;
            }
            svp+=r;
        }
        
        
        for(int i=1;i<9;i+=2){
            svi+=vector[i];
        }
        
        
        tot=10-((svp+svi)%10);
        
        if( tot==10 ){
            
            tot=0;
        }
        
        if(vector[9] == tot){
            return "correcta";
        }
        else{
            return "incorrecta";
        }
    }
        
    public void nevevoAr(int vector[]){
        
        int vecNuevo[] = new int[5];
        int sumaIterativa=0, cont=0,index=0;
        
        
        
        for(int i=0;i<10;i++){
            
            sumaIterativa += vector[i];
            cont += 1;
            
            if(cont == 2){
                vecNuevo[index]=sumaIterativa;
                sumaIterativa=0;
                cont=0;
                index++;
            }
        }
        
        System.out.println("El nuevo vector es: ");
        System.out.print("[");

        for(int i=0;i<5;i++){
            System.out.print(vecNuevo[i] + "-");
        }
        
        System.out.println("}");

    }
}
