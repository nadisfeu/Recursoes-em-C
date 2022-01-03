#include<stdio.h>
#include<stdlib.h>

int Fatorial(int numero);

int main(){
    int resultado, numero;
   printf("digite o numero pra achatr o fatorial:");
   scanf("%d", &numero);

   resultado = Fatorial(numero);

   printf("o fatorial e: %d", resultado);
   return 0;
}

int Fatorial(int numero){
if (numero== 0){
    return 1;
}
else {
    return numero*Fatorial(numero-1);
}

}