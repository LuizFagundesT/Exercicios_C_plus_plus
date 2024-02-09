#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//função de verificação da classificação dos triangulos
void selc_triangulo (float ladoa, float ladob,float ladoc)
{
  if( ladoa ==ladob==ladoc){
    printf("ESTE TRIANGULO EH EQUILATERO");  
  }else if(ladoa==ladob){
    printf("ESSE TRIANGULO EH ISOSCELES");
  }else if(ladoa==ladoc){
    printf("ESSE TRIANGULO EH ISOSCELES");
  }else if(ladob==ladoc){
    printf("ESSE TRIANGULO EH ISOSCELES");
  }else if (ladoa!=ladob||ladob!=ladoc||ladoc!=ladoa){
    printf("ESTE TRIANGULO EH ESCALENO");
  }

}

int main()
{
  char op;
  float lado1,lado2,lado3;

  do
  {
    //solicitando os lados do triangulo
    printf("DIGITE O VALOR  PRIMEIRO LADO:");
    scanf("%f",&lado1);
    printf("DIGITE O VALOR SEGUNDO LADO:");
    scanf("%f",&lado2);
    printf("DIGITE O VALOR TERCEIRO LADO:");
    scanf("%f",&lado3);

    //verificando se os lados podem formar um triangulo
    // comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados.
    if ( lado1 > (lado2+lado3)){
      printf("ESTE TRIANGULO NÃO EH VALIDO,DIGITE NOVOS VALORES!\n");
    }else if (lado2 > (lado1+lado3)){
      printf("ESTE TRIANGULO NÃO EH VALIDO,DIGITE NOVOS VALORES!\n");
    }else if (lado3 > (lado1+lado2)){
      printf("ESTE TRIANGULO NÃO EH VALIDO,DIGITE NOVOS VALORES!\n");
    }

  }while(lado1 > (lado2+lado3)||lado2 > (lado1+lado3)||lado3 > (lado1+lado2));
  selc_triangulo(lado1,lado2,lado3);




}