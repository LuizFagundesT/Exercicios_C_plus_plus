#include <stdio.h>
#include<stdlib.h>
#include <math.h>
// função deretorno do maior valor
// utilizado o raciocionio de endereos de memoria, usei a ligação de ponteiros para que ao inves de criar uma variavel nova eu utilizasse as que já tenho porem indicando-as usando ponteios. Nisso eu indico onde estão na memoria e minha função as localiza, fazendo assim o processo lógico
void ret_maior_valor(float *val1,float *val2)
{
  if( *val1 > *val2){
    printf("O primeiro valor eh o maior");
  }else{
    printf("O segundo valor eh o maior");
  }

}

// FUNÇÃO PRINCIPAL
int main()
{ 
  float valor1,valor2;
  // solicitano valoress
  printf(" DIGITE O PRIMEIRO VALOR :");
  scanf("%f",&valor1);
  printf(" DIGITE O SEGUNDO VALOR :");
  scanf("%f",&valor2);
  ret_maior_valor(&valor1, &valor2);
}

