#include <stdio.h>
#include <locale.h>
#define va 10

void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void organizar(float  ar[], int n) {
    int i, c;
    for (i = 0; i < n - 1; i++) {
        for (c = 0; c < n - i - 1; c++) {
            if (ar[c] > ar[c + 1]) {
                troca(&ar[c], &ar[c + 1]);
            }
        }
    }
}

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    int i;
    float num[va];

    for (i = 0; i < va; i++) {
        printf("Digite o %d número: ",i);
        scanf("%f", &num[i]);
    }

    organizar(num, va);

    printf("\nNúmeros organizados: \n");
    for (i = 0; i < va; i++) {
        printf("%.2f\n", num[i]);
    }

    return 0;
}

