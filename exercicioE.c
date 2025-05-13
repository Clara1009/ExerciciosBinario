#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int decimal, binario[32], i = 0;
    printf("Digite um numero decimal para transforma-lo em binario e octal: ");
    scanf("%d", &decimal);
    printf("\n");
    int TempDecimal = decimal, HDecimal = decimal;

    // Decimal para binario
    printf("Decimal para binario: ");
    if (decimal == 0) {
        printf("0\n\n");
    } else {
        while (decimal > 0) {
            binario[i] = decimal % 2; 
            decimal = decimal / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binario[j]);
        }
        printf("\n\n");
    }

    // Decimal para octal
    printf("Decimal para octal: ");
    int resto[32];
    int a = 0;
    if (TempDecimal == 0) {
        printf("0\n\n");
    } else {
        while (TempDecimal > 0) { 
            resto[a] = TempDecimal % 8;
            TempDecimal = TempDecimal / 8;
            a++;
        }
        for (int j = a - 1; j >= 0; j--) { 
            printf("%d", resto[j]);
        }
        printf("\n\n");
    }

    // Decimal para hexadecimal

    printf("Decimal para hexadecimal: ");
    char resto2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    char hex[32]; 
    int c = 0;
    if (HDecimal == 0) {
        printf("0\n\n");
    } else {
        while (HDecimal > 0) {
            hex[c] = resto2[HDecimal % 16];
            HDecimal = HDecimal / 16;
            c++;
        }
        for (int j = c - 1; j >= 0; j--) { 
            printf("%c", hex[j]);
        }
        printf("\n\n");
    }

    // Do binario para decimal
    int BinarioDecimal = 0;
    printf("Digite um numero binario para transforma-lo em decimal, octal e hexadecimal: ");
    scanf("%d", &BinarioDecimal);
    printf("\n");

    // Binario para decimal
    int dec = 0, m = 0;
    for (m = 0; BinarioDecimal > 0; m++) {
        dec = dec + pow(2, m) * (BinarioDecimal % 10);
        BinarioDecimal = BinarioDecimal / 10;
    }
    printf("Binario para decimal: %d\n\n", dec);

    // Binario para octal
    printf("Binario para octal: ");
    int n = 0;
    if (dec == 0) {
        printf("0\n\n");
    } else {
        while (dec > 0) { 
            resto[n] = dec % 8;
            dec = dec / 8;
            n++;
        }
        for (int j = n - 1; j >= 0; j--) { 
            printf("%d", resto[j]);
        }
        printf("\n\n");
    }


    return 0;
}
   



/*
    O código acima realiza a conversão de números decimais e binários para os sistemas binário, octal e hexadecimal.
    Ele utiliza loops e arrays para armazenar os restos das divisões, permitindo a conversão correta dos números.
    O código também lida com casos especiais, como o número 0, garantindo que a saída seja adequada.
*/