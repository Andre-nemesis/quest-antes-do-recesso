#include <stdio.h>
#include <locale.h>
#define va 10

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    int ar[va],c,pa[va],imp[va];

    for (c = 0; c < va; c++) {
        printf("Digite o %d número: ",c + 1);
        scanf("%d", &ar[c]);
    }

	printf("\n");
	
    for (c = 0; c < va; c++) {
        if (ar[c] % 2 == 0) {
            pa[c] = 1;
            printf("%d foi para %d\n",ar[c],pa[c]);
        } else if (ar[c] % 2 != 0) {
        	imp[c] = -1;
        	printf("%d foi para %d\n",ar[c],imp[c]);
		}
    }

    return 0;
} 
