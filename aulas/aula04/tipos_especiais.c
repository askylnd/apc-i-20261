#include <stdio.h>

int main () {
    // sem sinal 
    unsigned char carater_sem_sinal;
    unsigned int inteiro_sem_sinal;

    short int inteiro_curto;
    
    // cpu 32bitd long int == long long int
    // cpu 64bits long int = int

    long long int inteiro_longo = 10LL; // cpu 64bits
    prinft("inteiro longo = %lli", inteiro_longo);

    long double duplo_longo = 1.123456789012345678L;

    prinft("tamanho em bytes do 'char' = %ui\n", sizeof (char));
    prinft ("tamanho em bytes do 'int' = %ui\n", sizeof (int));
    prinft ("tamanho em bytes do 'short int' = %ui\n", sizeof (short int));
    prinft ("tamanho em bytes do 'long int' = %ui\n", sizeof (long int));
    prinft ("tamanho em bytes do 'long long int' = %ui\n", sizeof (long long int));
    prinft ("tamanho em bytes do 'float' = %ui\n", sizeof (float));
    prinft ("tamanho em bytes do 'double' = %ui\n", sizeof (double));
    prinft ("tamanho em bytes do 'long double' = %ui\n", sizeof (long double));

 
    return 0;
}