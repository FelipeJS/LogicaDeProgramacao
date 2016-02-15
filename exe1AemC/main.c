#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;
    int dia;

    scanf("%d", &mes);
    scanf("%d", &dia);

    if(mes < 2){
        char result[] = "Before";
    }else if(mes > 2){
        char result[] = "After";
    }else if(mes == 2 && dia == 18){
        char result[] = "Special";
    }else if(mes == 2 && dia < 18){
        char result[] = "Before";
    }else{
        char result[] = "After";
    }

    printf("%c\n",result[0]);

    return 0;
}
