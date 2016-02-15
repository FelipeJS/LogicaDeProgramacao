#include <bits/stdc++.h>

using namespace std;

int pai[1001];
int posto[1001];

int find(int x){
    if(pai[x] != x)
        pai[x] = find(pai[x]);
    return pai[x];
}

void unio(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return;

    if(posto[a] >= posto[b]){
        pai[b] = a;
        if(posto[a] == posto[b]) posto[a]++;
    }else{
        pai[a] = b;
    }
    return;
}

int main()
{
    int qnt, inf;
    cin >> qnt >> inf;

    char letra;
    int vetor[qnt+1];
    memset(vetor, -1, sizeof (vetor));

    for(int i = 0; i<=qnt; i++) pai[i] = i;

    int p, q;
    for(int i = 0; i < inf; i++){
        cin >> letra;
        cin >> p >> q;

        if(letra == 'F'){
            unio(p,q);
        }else{
            if(vetor[p] != -1){
                unio(q,vetor[p]);
            }
            if(vetor[q] != -1){
                unio(p,vetor[q]);
            }

            vetor[p] = q;
            vetor[q] = p;
        }
    }

    set<int> Set;
    for(int i = 1; i <= qnt; i++){
        Set.insert(find(i));
    }

    cout << Set.size() << endl;
    return 0;
}
