#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {
  //declarando o vetor
  int vetor1[20],idc,valor,x=0;//fator verificador x//
  //para preenchimento manual do vetor,mais trabalhoso

  // for(idc=0;idc<20;idc++){
  //   printf("DIGITE UM VALOR:\n");
  //   scanf("%d",&vetor1[idc]);
  // }

  // para gerar valores automaticos usamos a função rand//
  srand(time(NULL));
  for(idc=0;idc<20;idc++){
    vetor1[idc]=rand()%100;//neste caso a posição do meu idc vai receber um valor aleatorio entre 0 e 99, isso graças a função rand.
  }
// conferindo o vetor
  for (idc=0;idc<20;idc++){
    printf(" ,%d",vetor1[idc]);
  }

  // solicitando um valor ao usuario com base na listagem disponibilizada
  printf("\nESCOLHA UM VALOR EXISTENTE NO VETOR:\n");
  scanf("%d",&valor);
  //procurando o valor no vetor 
  for (idc=0;idc<20;idc++){
    if(vetor1[idc]==valor){
      printf("O VALOR ESTA NA POSIÇÃO %d\n",idc+1);
      x=1;
    }
  }
  //utilizando o fator verificador para ver se o valor esta no vetor
  if(x==0){
    printf("O VALOR NÃO ESTA NO VETOR\n");
  }

  return 0;
}