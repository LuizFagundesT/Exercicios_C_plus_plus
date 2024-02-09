#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int medianotas (int nota1,int nota2,int nota3);
int mediaari (int nota1,int nota2,int nota3);
int main()
{
    int n1,n2,n3,result;
    char op;
    printf("O PARAMETRO A REMETE A MEDIA DAS NOTAS\nO PARAMETRO B REMETE A MEDIA ARITIMEDICA DAS NOTAS\n\nDIGITE O PARAMETRO DA NOTA A ou B:");
    scanf("%c",&op);
    printf("DIGITE A PRIMEIRA NOTA:");
    scanf("%d",&n1);
    printf("DIGITE A SEGUNDA NOTA:");
    scanf("%d",&n2);
    printf("DIGITE A TERCEIRA NOTA:");
    scanf("%d",&n3);
    if(op== 'A' || op=='a')
    {
        result = medianotas (n1,n2,n3);
        printf("A MEDIA DAS NOTAS EH : %d",result);
    }else
    {
        result = mediaari (n1,n2,n3);
        printf("A MEDIA DAS NOTAS EH : %d",result);

    }


}


//FUNÇÕES
//função media das notas
int medianotas (int nota1,int nota2,int nota3)
{
    int resultado;
    resultado= (nota1+nota2+nota3)/3;
    return resultado;
}
//função media aritimedica
int mediaari (int nota1,int nota2,int nota3)
{
    int resultado;
    resultado= ((nota1*5+nota2*3+nota3*2))/10;
    return resultado;
}