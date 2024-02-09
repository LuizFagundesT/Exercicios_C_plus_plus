#include <stdio.h>
#include<stdlib.h>
#include <math.h>
//criei uma função que imprime os dendereçoes de memoria das variaveis e o valor delas
// usei a logica de ponteiros
void imprime(int *valint,float *valfloat, char *valchar)
{
  printf("ENDERECOS DAS VARIAVEIS:\n%p\n%p\n%p\n",valint,valfloat,valchar);
  printf("VALOR DAS VARIAVEIS:\nINTEIRA:%d\nREAL:%.3f\nCARACTERES:%s\n",*valint,*valfloat,valchar);
}


int main()
{

  int inteiro=0,*p1=&inteiro;
  float real=0.0,*p2=&real;
  char letra ='a',*p3=&letra;
  imprime(&inteiro,&real,&letra);
// mudança dos valores manualmente 
  inteiro=10;
  real= 10.10;
  letra = 'v';
  imprime(&inteiro,&real,&letra);

  // mudança de valores feita pelo usuaio

  // printf("DIGITE UM NOVO VALOR PARA VARIAVEL INTEIRA: ");
  // scanf("%d",&inteiro);
  // printf("DIGITE UM NOVO VALOR PARA VARIAVEL 'REAL': ");
  // scanf(" %f",&real);
  // printf("DIGITE NOVOS CARACTERES PARA VAIAVEL 'CARACTERES': ");
  // scanf("%s",&letra);

}