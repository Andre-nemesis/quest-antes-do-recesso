#include <stdio.h>
#include <locale.h>
#define va 10

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    int c,indice;
    float ar[va],pa[va];

    for (c = 0; c < va; c++) {
        printf("Digite o %d número: ",c + 1);
        scanf("%f", &ar[c]);
    }

	printf("\n");
	
    for (c = 0; c < va; c++) {
        if (c % 2 == 0) {
            printf("%.2f seu indice: %d\n",ar[c],c);
        } 
    }

    return 0;
} 
