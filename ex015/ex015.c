#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//preenchendo vetor a
void preenche_vetora(int *pntvetora)
{
  for (int po=0,idc=0;idc<10;idc++,po++)
  {
    printf("DIGITE O VALOR DO VETOR A NA POSIÇÃO %d: ",po);
    scanf("%d",&pntvetora[idc]);
  }

}
//preechendo vetor b
void preenche_vetorb(int *pntvetorb)
{
  for (int po=0,idc=0;idc<10;idc++,po++)
  {
    printf("DIGITE O VALOR DO VETOR B NA POSIÇÃO %d: ",po);
    scanf("%d",&pntvetorb[idc]);
  }

}

//Crie um novo vetor, C, calculando C = A - B. Mostre na tela os dados do vetor C.
void preenche_vetorc( int *pveta,int *pvetb, int *pvetc)
{
  for ( int idc=0;idc<10;idc++)
  {
   pvetc[idc]=(pveta[idc])-(pvetb[idc]);
  }
}
int main()
{ int veta[10],vetb[10],vetc[10];
 preenche_vetora(&veta[0]);
 printf("\nAGORA VAMOS PREENCHER O VETOR B\n");
preenche_vetorb(&vetb[0]);
 //printando o vetor c
 //chamei função que faz as subtrações entra a e b e adciona ao vetor c o resultada, casa a casa
 preenche_vetorc(&veta[0],&vetb[0],&vetc[0]);
 printf("ESTES SÃO OS VALORES DO VETOR C :");
 for (int idc=0;idc<10;idc++){
   printf("%d ",vetc[idc]);
 }
}