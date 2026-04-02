#include <stdio.h>
int main () {
printf ("====================================\n");
printf ("             NOTA LEGAL\n");
printf ("====================================\n");
printf ("Produto         Qnt  valor  unit\n");
printf ("%-15s %03d %12.2f\n", "Camiseta", 002,39.99);
printf ("%-15s %03i %12.2f\n", "Calca", 001, 89.90);
printf ("%-15s %03d %12.2f\n", "Meia Social", 003, 19.99);
printf ("====================================\n");
printf ("%-15s %17.2f\n", "Total", 229.85);
return 0;
}