#include <stdio.h>

int main(void)
{
    //declarando as variaveis 
    float capi,meses,juros,jurostotal,red=0;
    // solicitando valores ao usuário
    printf("Digite o valor do capital inicial a ser investido.\n!!USE PONTOS NO LUGAR DE VIRGULAS!!\nVALOR:R$");
    scanf("%f",&capi);
    printf("Quantos meses deseja manter a aplicação: ");
    scanf("%f",&meses);
    printf("Qual o valor da taxa de juros em percentual a ser rendida ao mes: ");
    scanf("%f",&juros);
    //iniciando a lógica,devemos atentar que o valor a ser somado ao capital é em função do valor do mês que no caso ja sofreu um aumento de juros... seria acumulativo
    for(int verf=0;verf<meses;verf++)
    {
         red= capi*(juros/100);
         capi=capi+red;
         jurostotal=jurostotal+red;

    }
    printf("O total final da aplicação apos os meses e de: R$%f\nO juros rendido foi de:R$%f ",capi,jurostotal);



return (0);
}