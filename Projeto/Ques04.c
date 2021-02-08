#include <stdio.h>
#include <stdlib.h>

int main (void){

    float horas, vhora, mensalidade, nota1, nota2, media;
    int faltas, presencas, a, b, c, d, resp;

    a=1;
    b=2;
    c=3;
    d=4;
    vhora = 45;
    presencas=60;

   printf ("Bem Vindo ao Manual de Informacoes Basicas\n");
   printf ("Selecione um dos servicos\n");

   printf ("1: o programa exibe informacoes de endereco e telefone da faculdade\n");
   printf ("2: a quantidade de horas que o aluno esta cursando semanalmente e o valor da sua mensalidade\n");
   printf("3: a quantidade dias que o aluno faltou e a quantidade de horas da disciplina\n");
   printf("4: notas e estado de aprovacao\n");

   scanf("%i", &resp);

   if(resp==1){
        printf ("O endereco da Uni7 e Av. Almirante Maximiniano da Fonseca, 1395 - Luciano Cavalcante, Fortaleza - CE, 60811-020\n");
    }
    if(resp==2){
        printf ("Quantas horas voce esta estudando esse semestre?\n");
        scanf("%f", &horas);
        printf("Voce deve pagar a mensalidade de %.2f\n", vhora*horas);

    }
    if(resp==3){
        printf("Informe a quantidade de faltas nesse semestre:\n");
        scanf("%d", &faltas);
        if (faltas>presencas*0.2){
            printf("Voce esta reprovado!\n");
        } else {
            printf("Voce foi aprovado!\n");
        }

    }
    if(resp==4){
        printf("Digite a Notas N1 e N2\n");
        scanf("%.2f %.2f", &nota1, &nota2);

        media = (nota1+nota2)/2;
        if(media>=7){
            printf("Voce foi aprovado com a media %.2f\n",media);
        } else {
            printf("Sera necessario refazer a disciplina!");
        }
    }
return 0;
}
