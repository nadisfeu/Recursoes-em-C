#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void imprime(int n1);

int main (){
  int n1;
  printf("digite o numero:");
  scanf("%d", &n1);
   
   imprime(n1);

return 0;
}

void imprime(int n1){
 if (n1 == 0){
     printf("0");
 }
  else {
     printf("%d-",n1);
      imprime (n1-1);
  }
}
