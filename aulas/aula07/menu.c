#include <stdio.h>
#include <stdlib.h>

int main() {
 int opcao = 0;

 do{
    system("clear");
    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer uma recarga\n");
    printf("3 - Ver mensagens recebudas\n");
    printf("4 - Ver ultimas chamdas\n");
    printf( "5 - Sair\n");
    printf( "Escolher uma opcao => ");
    scanf( "%i" , &opcao);
    while(getchar() != '\n');


switch(opcao){
case 1: printf("Seu saldo eh de R$10,00\n"); break;
case 2: printf("Escolha entre 10, 20 ou 50\n"); break;
case 3: printf("voce nao tem mensagens\n"); break;
case 4: printf("7070-70\n"); break;
case 5: printf("Agradecemos o contato. ate logo!\n"); break;
default: printf("Opcao invalida! Tente novamente mais tarde\n");
}
 printf("Pressione ENTER para continuar...");
 getchar();
 }while (opcao != 5);



return 0;
}