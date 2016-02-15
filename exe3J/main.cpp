#include <iostream>
#include <math.h>
using namespace std;bool primo[int(1000000)];int main(){int a;primo[1] = 1;for(int i = 2; i <= 1000000; i++)if(!primo[i])for(int j = 2; i*j <= 1000000; j++)primo[i*j] = 1;while(cin >> a && a){for(int i = 2; i <= a; i++) if(!primo[i] && !primo[a-i]){cout << a << " = " << i << " + " << a-i << endl;break;}}return 0;}
