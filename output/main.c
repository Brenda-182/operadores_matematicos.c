#include <stdio.h>
int main(){
    int a = 10;
    int b = 5;

    //Operadores aritméticos
    int soma = a + b;
    int subtração = a - b;
    int multiplicação = a * b;
    int divisão = a / b;

    //Operadores de atribuição
    a += 2; //a será 12
    b *= 3; //b será 15

    //Operadores de incremento e decremento
    a ++; // a será 13
    b --; //b sera 14

    //Exibição dos resultados
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtração);
    printf("Multiplicação: %d\n", multiplicação);
    printf("Dvisão: %d\n", divisão);
    printf("Novo valor de a(após += 2 e ++): %d\n", a);
    printf("Novo valor de b(após *= 3 e --): %d\n", b);

    return 0;
}