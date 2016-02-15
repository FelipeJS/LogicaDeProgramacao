#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    scanf("%d", &num);

    for(i = 1; i <= num; i+=2){
        if(num == i)
            printf("%d",num);
        else{
            printf("%d,", ++i);
            printf("%d,", --i);
        }
    }
}
