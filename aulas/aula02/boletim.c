#include <stdio.h>
int main () {
    char tecla_pressionada;
    int numero_inteiro;
    float numero_com_seis_casas;
    double numero_com_doze_casas;

    tecla_pressionada = 'A';
    numero_inteiro = 10;
    numero_com_seis_casas = 0.123456f;
    numero_com_doze_casas = 0.123456;

    float nota_a1 = 5.6f;
    float nota_a2 = 5.0f;
    float nota_a3 = 0.0f;
    float nota_final = 5.2f;
    

    printf("-------------------------------\n");
    printf("      BOLETIM DE NOTAS\n");
    printf("-------------------------------\n");
    printf("disciplina a1 a2 a3 mf\n");
    printf("apc1      %5.1f %5.1f %5.1f %5.1f\n", nota_a1, nota_a2, nota_a3, nota_final);
    nota_a1 = 4.2f;
    nota_a2 = 3.0f;
    nota_a3 = 1.0f;
    nota_final = 4.0f;

    printf("md        %5.1f %5.1f %5.1f %5.1f\n", nota_a1, nota_a2, nota_a3, nota_final);
    nota_a1 = 9.0f;
    nota_a2 = 10.0f;
    nota_a3 = 2.0f;
    nota_final = 5.0f;
    printf("calc1     %5.1f %5.1f %5.1f %5.1f\n", nota_a1, nota_a2, nota_a3, nota_final);
    
    return 0;
}