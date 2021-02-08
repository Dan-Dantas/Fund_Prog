#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int idade;
  float altura;

  printf("Por criterio de seguranca voce devera responder algumas perguntas:\n");
  printf("Informe sua idade: \n");
  scanf("%d", &idade);
  printf("Informe sua altura: \n");
  scanf("%f", &altura);

  if(altura<=1.4){
    printf("Sua altura e menor do que 1,40, voce não tem altura suficiente para brincar nesse brinquedo\n");
  }
  if(idade>=14 && altura>=1.4){
    printf("Sua entrada esta liberada\n");
  }
  else {
    printf("Voce nao se enquadra nos criterio para brincar nesse brinquedo");
  }
  return 0;
}
