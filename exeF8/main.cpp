#include <iostream>

using namespace std;


int fatorial (int n)
{
    if(n==1)
        return n;
    return fatorial(n-1) * n;
}

int main()
{
    int contador = 0;
    int resultado = 0;
    int numero;
    cin >> numero;

    while(resultado < numero){
        if(fatorial(8) <= (numero-resultado)){
            resultado += fatorial(8);
            contador++;
        }else if(fatorial(7) <= (numero-resultado)){
            resultado += fatorial(7);
            contador++;
        }else if(fatorial(6) <= (numero-resultado)){
            resultado += fatorial(6);
            contador++;
        }else if(fatorial(5) <= (numero-resultado)){
            resultado += fatorial(5);
            contador++;
        }else if(fatorial(4) <= (numero-resultado)){
            resultado += fatorial(4);
            contador++;
        }else if(fatorial(3) <= (numero-resultado)){
            resultado += fatorial(3);
            contador++;
        }else if(fatorial(2) <= (numero-resultado)){
            resultado += fatorial(2);
            contador++;
        }else{
            resultado += fatorial(1);
            contador++;
        }
    }

    cout << contador << endl;
    return 0;
}
