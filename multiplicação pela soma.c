#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int multiplica_pela_soma(int n1, int n2);

int main(){
  int n1, n2, resultado;
  
   printf("digite os dois numeros para a multiplicacao: ");
   scanf("%d %d", &n1, &n2);
   
   resultado = multiplica_pela_soma(n1,n2);
  
    printf("o valor e: %d", resultado);

  return 0;
}

int multiplica_pela_soma(int n1, int n2){
  if(n1== 0 || n2== 0){
     return 0;
  }
  else if (n1 ==1 ) {
      return n2;
   }
     else if(n2 == 1){
        return n1;
     }
  
       else{
         return n1 + multiplica_pela_soma(n1, n2-1);
       }  
}