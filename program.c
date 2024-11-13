#include "biblioteca.h"


int multiplicar(Calcular calcular){
    
   if(calcular.resultado == calcular.valor1 * calcular.valor2){
       calcular.resultado = calcular.valor1 * calcular.valor2;
        printf("%d: ", &calcular.resultado);
        return 1;
   } else {
        printf("error ao fazer a operacao! ");
        return 0;
   }
        

}
