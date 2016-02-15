#include <iostream>
#include <iomanip>
using namespace std;

long double fatorial (long double n)
{
    if(n==0)return 1;
    if(n==1)return n;
    return fatorial(n-1) * n;
}

int main()
{
    long double p, n, nFat, pFat, npFat, resultado;

    while(cin >> n >> p && n != 0){
        pFat = fatorial(p);
        nFat = fatorial(n);
        npFat = fatorial(n-p);

        resultado = nFat / (pFat * npFat);
        cout << fixed << setprecision(0) << resultado << endl;
    }
    return 0;
}
