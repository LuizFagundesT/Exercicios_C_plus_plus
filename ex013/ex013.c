#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//função de preencher o vetor 
void preenche_vetor(int *pntvetor)
{
  for (int po=0,idc=0;idc<5;idc++,po++)
  {
    printf("DIGITE O VALOR DO VETOR NA POSIÇÃO %d: ",po);
    scanf("%d",&pntvetor[idc]);
  }


}

//função de achar o menor valor 
void menor_valor(int *pntvetor)
{
  int menor=pntvetor[0],idc=1,posicao=0;
  for(idc=1;idc<5;idc++)
  {
    if( pntvetor[idc]<menor){
      menor=pntvetor[idc];
      posicao = idc;
    }
  }
   printf("\nO menor valor eh  %d e esta na posicao %d ",menor,posicao);

}

//função que muda a posição do menor valor //
void muda_posicao(int *pntvetor)
{
  int menor=pntvetor[0],idc=1;
  for(idc=1;idc<5;idc++)
  {
    if( pntvetor[idc]<menor){
      menor=pntvetor[idc];
    }
  }
  pntvetor[0] = menor;
  printf("\nO menor valor esta na posição 0 e a posição zero vale %d",pntvetor[0]);
}

//função que imprime o vetor //
void imprime(int *pntvetor)
{
  printf("\n Os valores do vetor são:");
  for (int idc=0;idc<5;idc++){
    printf("%d ",pntvetor[idc]);
  }

}


int main()
{
  int vetor[5];
  //preenchimento do vetor //
  preenche_vetor(&vetor[0]);
  for(int idc=0;idc<5;idc++)
  {
    printf("%d ",vetor[idc]);
  } 
  // seleção do menor valor //
  menor_valor(&vetor[0]);
  //mudando a posição do menor valor para a primeira posição do vetor 
  muda_posicao(&vetor[0]);
  //imprimindo os valores //
  imprime(&vetor[0]);
}