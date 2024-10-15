#include <stdio.h>

void printRoyal() {
    printf("RRRR   OOO  Y   Y  AAAAA  L    \n");
    printf("R   R O   O  Y Y  A     A L    \n");
    printf("RRRR  O   O   Y   AAAAAAA L    \n");
    printf("R  R  O   O   Y   A     A L    \n");
    printf("R   R  OOO    Y   A     A LLLLL\n");
}
void BemVindo() {
    printf("---- Bem Vindo ----");
}
void printPlace() {
    printf("PPPP   L      AAAAA  CCCCC  EEEEE\n");
    printf("P   P  L     A     A C      E    \n");
    printf("PPPP   L     AAAAAAA C      EEEE \n");
    printf("P      L     A     A C      E    \n");
    printf("P      LLLLL A     A  CCCCC EEEEE\n");
}

int main() {
    printRoyal();
    printf("\n");
    BemVindo();
    printf("\n\n"); 
    printPlace();
    return 0;
}
