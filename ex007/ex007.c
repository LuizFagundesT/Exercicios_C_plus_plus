#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//FUNÇÃO QUE ORDENA OS VALORES 
void crescente ( int v1, int v2, int v3)//estrututura logica para permutação entre os valores até qqu ache a sequencia correta
 {
     int po1,po2,po3;
     if (v1<v2 && v2<v3){
        printf("%d %d %d",v1,v2,v3);//123
    }else if( v1<v3 && v3<v2){
        printf("%d %d %d",v1,v3,v2);//132
    }else if (v2<v1 && v1<v3 ){
        printf("%d %d %d",v2,v1,v3);//213
    }else if (v2<v3 && v3<v2 ){
        printf("%d %d %d",v2,v3,v1);//231
    }else if (v3<v1 && v1<v2 ){
        printf("%d %d %d",v3,v1,v2);//312
    }else if (v3<v2 && v2<v1 ){
        printf("%d %d %d",v3,v2,v1);//321
    }

}
//FUNÇÃO PRINCIPAL
int main()
{
    int a,b,c;
    printf("Digite 03 valores nao nulos para que sejem ordenados:\n");
    do // loping para excluir os valores nulos 
    {
    printf("DIGITE O PRIMEIRO NUMERO:");
    scanf("%d",&a);
    printf("DIGITE O SEGUNDO NUMERO:");
    scanf("%d",&b);
    printf("DIGITE O TERCEIRO NUMERO:");
    scanf("%d",&c);
      if(a==0 || b==0 || c==0 ){
        printf("NÃO DIGITE VALORES NULOS\n");
      }
    } while (a==0 || b==0 || c==0 );
  // chamei a função qque jáa possui printf em seu interior 
  crescente(a, b, c);


}