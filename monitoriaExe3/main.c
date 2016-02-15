#include <stdio.h>
#include <stdlib.h>

int n = 0;
int divisao(int a, int b){
        if(a - b >= 0){
            a = a - b;
            n++;
            divisao(a,b);
        }else{
            return n;
        }
}

int main()
{
    int n1, n2, result;
    scanf("%d", &n1);
    scanf("%d", &n2);

    if(n2 <= 0)
        printf("Nao pode\n");
    else
        result = divisao(n1, n2);

    printf("resultado = %d\n", result);
}
