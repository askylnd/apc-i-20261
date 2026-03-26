#include <stdio.h>

int main() {
char tecla_pressionada;
printf("pressione uma tecla: ");
scanf("%c", &tecla_pressionada);
while(getchar() != '\n'); //limpar o buffer
printf("voce pressionou a tecla '%c'\n", tecla_pressionada);
int idade;
printf ("informe a sua idade: ");
scanf ("%i", &idade);
while(getchar() != '\n'); //limpar o buffer
printf("voce tem %i anos\n", idade);

float preco;
printf("informe o preco da gasolima: ");
scanf("%f", &preco);
printf("o preco da gasolina eh R$ %.2f\n", preco);

    return 0;
}