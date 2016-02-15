#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string myString;
    cin >> myString;

    float soma = 0.00;
    int count = 0;
    for(int i = 0; i < myString.length(); i++){
        if(myString[i] == '2'){
            soma += 2; count++;
        } else
        if(myString[i] == '3'){
            soma += 3; count++;
        }else
        if(myString[i] == '4'){
            soma += 4; count++;
        }else
        if(myString[i] == '5'){
            soma += 5; count++;
        }else
        if(myString[i] == '6'){
            soma += 6; count++;
        }else
        if(myString[i] == '7'){
            soma += 7; count++;
        }else
        if(myString[i] == '8'){
            soma += 8; count++;
        }else
        if(myString[i] == '9'){
            soma += 9; count++;
        }else
        if(myString[i] == '1' && myString[i+1] == '0'){
            soma += 10; count++;
        }else if(myString[i] == '1'){
            soma += 1; count++;
        }
    }
    float media = soma / count;

    printf("%.2f\n", media);
    return 0;
}
