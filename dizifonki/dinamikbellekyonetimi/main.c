#include <stdio.h>
#include <stdlib.h>

int main() {
    int *alan1 = malloc(10 * sizeof(int));
    int *alan2 = calloc(10, sizeof(int));

    printf("Malloc ile tahsis edilen bellek alanı:\n");
    for (int i = 0; i < 10; i++) {
        printf("alan1[%d] = %d ve alan2[%d] = %d\n", i, alan1[i], i, alan2[i]);
    }

    printf("****************************************************************************\n");

    alan1 = realloc(alan1, 5 * sizeof(int));
    if (alan1 == NULL) {
        printf("Bellek boyutu küçültülürken hata oluştu.\n");
        return 1;
    }

    printf("Realloc ile yeniden boyutlandırılan bellek alanı:\n");
    for (int i = 0; i < 5; i++) {
        printf("alan1[%d] = %d\n", i, alan1[i]);
    }

    free(alan1);
    free(alan2);

    return 0;
}

