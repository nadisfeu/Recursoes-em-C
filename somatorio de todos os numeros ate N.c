#include<stdio.h>
#include<stdlib.h>

int somatorio(int numb);

int main(){
 int numero, soma;
 printf("digite o numero parar calcular o somatorio:");
 scanf("%d", &numero);
 if(numero < 0){
     printf("o valor e negativo!");
     return 0;
 }
else { soma = somatorio(numero);
}
 
 printf("a soma e : %d", soma);
return 0;
}


int somatorio(int numb){
  if(numb ==1 || numb == 0){
      return numb;
  }
  else{
      return  numb+somatorio(numb-1);
  }

}
