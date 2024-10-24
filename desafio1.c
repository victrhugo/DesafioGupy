#include <stdio.h>

int pertenceFibonacci(int n) {
    int a = 0, b = 1, temp;

    if (n == a || n == b) {
        return 1; 
    }

    while (b < n) {
        temp = b;
        b = a + b; 
        a = temp;

        if (b == n) {
            return 1; 
        }
    }

    return 0; 
}

int main() {
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
