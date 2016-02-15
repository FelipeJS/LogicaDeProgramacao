#include <iostream>
#include <iomanip>

using namespace std;

long double fatorial (long double n)
{
    if(n == 0){
        return 1;
    }else{
        long double i;
        i = n - 1;
        for (i; i!=1; i--)
            n = n * i;
        return n;
    }
}

int main()
{
    long double n, p;
    long double nFat, pFat, npFat, resultado;

    while(cin >> n >> p && n != 0){
        pFat = fatorial(p);
        nFat = fatorial(n);
        npFat = fatorial(n-p);

        resultado = nFat / (pFat * npFat);
        cout << fixed << setprecision(0) << resultado << endl;
    }
    return 0;
}
