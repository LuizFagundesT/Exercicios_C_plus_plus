
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main()
{
  char palavra[100];
  int vogal,cos,tamanho;
  //capitando a palavras 
  printf("Digite uma palavra: ");
  //utilizei esse formato para contar com os espaços 

  scanf("[^\n]", &palavra);
  //pegando tamanho da palavra para usar no for 
  tamanho= strlen(palavra);


  for ( int idc=0;idc<tamanho;idc++)
  { 
    //verificando se a letra é vogal
    if (palavra[idc]=='a'||palavra[idc]=='e'||palavra[idc]=='i'||palavra[idc]=='o'||palavra[idc]=='u')
    {
      vogal++;
      //verificando se a letra é consoante
    }else{
      cos++;
    }
  }
  printf("ESTE EH O NUMERO DE VOGAIS %d\nESTE EH O NUMERO DE CONSOANTES %d",vogal,cos);
}