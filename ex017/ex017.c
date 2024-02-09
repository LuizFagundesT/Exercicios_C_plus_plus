#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() 
{
    char palavra[100];
//obtendo a palavra do ususario 
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
//essa variavel vai receber a quantidade de letras da palavra, contando de retornando um vallor inteiro
    int tamanho = strlen(palavra);

    printf("Palavra de tras para frente: ");
  // tamanho -1 por causa que o total de string de um vetor é sempre -1.
    for (int idc = tamanho - 1; idc >= 0; idc--) 
    {
        printf("%c", palavra[idc]);
    }
 }
