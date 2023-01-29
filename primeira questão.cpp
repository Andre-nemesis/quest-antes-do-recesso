#include <stdio.h>
#include <locale.h>
#define va 10

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    int ar[va],c;

    for (c = 0; c < va; c++) {
        printf("Digite o %d número: ",c + 1);
        scanf("%d", &ar[c]);
    }

    for (c = 9; c >= 0; c--) {
        if (ar[c] % 2 == 0) {
            printf("%d\n", ar[c]);
        }
    }

    return 0;
} 
