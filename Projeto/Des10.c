#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i;
    int TAM;
    int voo[TAM][3];

    printf("Informe a quantidade de alunos da turma: \n");
    scanf("%f", &TAM);

    for(i=0;i<TAM;i++){
        printf("Informe a primeira nota do aluno %d: \n", i+1);
        scanf("%d", &TAM[i][0]);

        printf("Informe a segunda nota do aluno %d: \n", i+1);
        scanf("%d", &TAM[i][1]);
        }

    for(i=0;i<TAM;i++){
         printf("O aluno %d obteve %.2f na primeira prova, %.2f na segunda prova  e ficou com media de %.2f .\n", i+1, TAM[i][0], TAM[i][1], TAM[i][2]= (TAM[i][0]+TAM[i][1])/2);
        }

return 0;
}
