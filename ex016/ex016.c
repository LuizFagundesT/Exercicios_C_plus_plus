#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// função que vai selecionar os numeros negativos//


void copiaNegativos(int *pntvetorx, int *vetneg)
{
    int idc, contador  = 0,tamanho=10;
    for (idc = 0; idc < tamanho; idc++) {
        if (pntvetorx[idc] < 0) {
              vetneg[contador] = pntvetorx[idc];
          contador++;
        }
        if (contador == 10) {
            break; // Parar após copiar 10 números negativos
        }
    }
    // Preencha o restante do vetor com 0
    for (; contador < 10; contador++) {
          vetneg[contador] = 0;
    }
}

//FUNÇÃO PRINCIPAL//

int main()
{ 
  int vetorx[10],vetneg[10];
  //PREENCHENDO O MEU VETOR INICIAL
  for (int idc=0;idc<10;idc++)
  {
    printf("Digite o valor do vetor na posição %d: ",idc);
    scanf("%d",&vetorx[idc]);
  }

  //IMPRIMINDO OS VALORES NEGATIVOS 
  copiaNegativos(&vetorx[0], &vetneg[0]);


  printf("Os valores negativos são:");


  for (int idc=0;idc<10;idc++)
  {
    printf("%d ",vetneg[idc]);
  }
}