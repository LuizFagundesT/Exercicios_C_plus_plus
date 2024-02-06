#include <stdio.h>

int main(void) {
  //Declarando variáveis
  int n1,n2,n3,maior,menor,prod,med,soma;
  //solicitando valores ao usuário 
  printf("Dgite tres valores:\nValor01: ");
  scanf("%d",&n1);
  printf("Valor02: ");
  scanf("%d",&n2);
  printf("Valor03: ");
  scanf("%d",&n3);
  // lógica de seleção 
  //maior valor
  if(n1>n2 && n1>n3){
    maior=n1;
  } else if (n2>n1 && n2>n3){
    maior = n2;
  }else{
    maior= n3;
  }
  //menor valor
  if(n1<n2 && n1<n3){
    menor=n1;
  } else if (n2<n1 && n2<n3){
    menor = n2;
  }else{
    menor= n3;
  }
  //soma dos valores
  soma=n1+n2+n3;
  //produto
  prod=n1*n2*n3;
  //media 
  med= (n1*n2*n3)/3;

  

  //exibindo resultados finais 
  printf ("Os valores são:\nMaior valor: %d\nMenor valor: %d\nSoma dos valores: %d\nProduto dos valores: %d\nMedia entre os valores:%d",maior,menor,soma,prod,med);
  return 0;
}