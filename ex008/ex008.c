#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int soma(int num1,int num2);
int main()
{
    int val1,val2,resultado;
    printf("DIGITE VALOR 1:");
    scanf("%d",&val1);
    printf("DIGITE VALOR 2:");
    scanf("%d",&val2);
    resultado = soma(val1,val2);
    printf("este é o resultado %d",resultado);

}

int soma(int num1,int num2){
 int resultadofunc;
 resultadofunc = num1+num2;
 return resultadofunc;
}