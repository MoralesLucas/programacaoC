#include <stdio.h>

int main(){
    char nome[50];
    int matricula;
    char turno[10];
    float nota;


    printf("Digite seu nome:\n");
    scanf("%s", &nome);

    printf("Digite sua matricula:\n");
    scanf("%i", &matricula);

    printf("Digite seu turno: Manhã[M], Tarde[T], Noite[N]\n");
    scanf("%s", &turno);

    printf("Digite sua ultima nota na matéria:\n");
    scanf("%f", &nota);

    printf("O aluno %s, de matricula %i, estudante do turno %s, teve nota %.2f na última avaliação de ADS.\n", nome , matricula, turno, nota);

    return 0;

}
