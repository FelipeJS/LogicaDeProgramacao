#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K;
    cin >> K;

    stack<int> numbers;

    int numbersRead[100000];
    int soma = 0;

    //leitura da entrada
    for(int i = 0; i < K; i++)
    {
        cin >> numbersRead[i];
    }

    //empilhando validos
    for(int i = 0; i < K; i++)
    {
        if(numbersRead[i] != 0)
            numbers.push(numbersRead[i]);
        else
            numbers.pop();
    }

    //somando os validos empilhados
    while(!numbers.empty())
    {
        soma += numbers.top();
        numbers.pop();
    }

    cout << soma << '\n';

    return 0;
}
