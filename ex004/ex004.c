#include <stdio.h>

int main(void){
    //IMPRIMINDO OS NÚMEROS NATURAIS DECRECENTE  A PARTIR DE UM DETERMINADO NUMERO NATURAL 
    int valor;
    printf("Digite um valor para a sequencia numerica: ");
    scanf("%d",&valor);
    //iniciando loping 
    for(int verf=valor;verf>=0;verf--,valor--){
      printf("%d\n",valor);
    }
return 0;
}