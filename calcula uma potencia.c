#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int numeroElevado(int k, int n);

int main(){
  int resultado, numero, expoente;
  printf("digite o numero para conseguir a potencia, e seu expoente:");
  scanf("%d %d",&numero, &expoente);
  resultado = numeroElevado(numero, expoente);
  printf("o valor da potencia e: %d", resultado);

  return 0;
}

int numeroElevado(int k, int n){
    if(k == 1 || n == 0){
        return 1;
    }
    else if(n == 1){
        return k;}
          
          else {
           return k*pow (k,n-1);
    }
}
