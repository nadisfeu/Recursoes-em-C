#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int Primeiros_Cubos(int n);

int main(){
  int resultado, numero;
  printf("digite o numero para conseguir os primeiros cubos:");
  scanf("%d",&numero);
  resultado = Primeiros_Cubos(numero);
  printf("o valor do somatorio dos primeiros cubos e: %d", resultado);

  return 0;
}

int Primeiros_Cubos(int n){
    if(n == 1){
        return 1;
    }
    else{
        return pow (n,3) + Primeiros_Cubos(n - 1);
    }
} 