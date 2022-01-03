#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int Fibonnaci( int n);

int main(){
 int resultado, numero;
 printf("digite a quantidade de casas da sequencia de fibonnaci que deseja:");
 scanf ("%d", &numero);
 resultado = Fibonnaci(numero);
 printf("o numero e: %d", resultado);
return 0;
}

int Fibonnaci( int n){
  if (n == 1 || n == 2){
      return 1;
  }

  else{
      return Fibonnaci(n-1) + Fibonnaci (n -2);
  }
}
