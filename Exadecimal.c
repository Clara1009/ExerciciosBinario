// Transforma o numero binario em Exadecimal

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    int decimal = 0, tamanho, potencia = 0;
 char binario[66];
    printf("Digite um numero binario para transforma-lo em Exadecimal: ");
    scanf("%s", binario);
    tamanho = strlen(binario);

    for (int i = tamanho - 1; i >= 0; i--) {
        if (binario[i] == '1') {
            decimal = decimal + pow(2, potencia);
        }
        potencia++;
    }
   // Decimal para hexadecimal

    printf("Decimal para hexadecimal: ");
    char resto[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex[32];
    int i = 0;

    if (decimal == 0) {
        printf("0\n\n");
    } else {
        while (decimal > 0) {
            hex[i++] = resto[decimal % 16];
            decimal /= 16;
        }
        hex[i] = '\0';
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", hex[j]);
        }
        printf("\n\n");
    }

    }




