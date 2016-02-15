#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, contV1=0, contV2=0;
    int vetOrigem[10], vetSaida1[10], vetSaida2[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &vetOrigem[i]);
        if(vetOrigem[i] >= 0)
            vetSaida1[contV1++] = vetOrigem[i];
        else
            vetSaida2[contV2++] = vetOrigem[i];
    }

    for(i = 0; i < 10; i++){
        printf("%d,", vetOrigem[i]);
    }
        printf("\n");
    for(i = 0; i < contV1; i++){
        printf("%d,", vetSaida1[i]);
    }
        printf("\n");
    for(i = 0; i < contV2; i++){
        printf("%d,", vetSaida2[i]);
    }
    return 0;
}
