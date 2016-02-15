#include <bits/stdc++.h>
using namespace std ;
vector < vector<int> > grafo;
int vis[3002];

int bfs(int origem, int num_vertices){
    queue<int> fila;
    memset(vis, 0, sizeof(vis));

    for(int i = origem; i <= num_vertices; ++i){
        if(vis[i] == 0){
            fila.push(i);
            vis[i] = 1;

            while(!fila.empty()){
                int atual = fila.front();
                fila.pop();
                int cor = (vis[atual] == 1)? 2 : 1;

                for(int v = 0 ; v < grafo[atual].size(); ++v){
                    if(vis[grafo[atual][v]] == 0){
                        fila.push(grafo[atual][v]);
                        vis[grafo[atual][v]] = cor;
                    }else{
                        if(vis[grafo[atual][v]] == vis[atual]){
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int main(){
    int num_vertices, num_arestas;
    cin >> num_vertices >> num_arestas;

    int u, v;
    grafo = vector < vector<int> >(num_vertices+1);
    for(int i = 0 ; i < num_arestas; ++i){
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    if(bfs(1, num_vertices)){
        cout << "Besouro suspeito encontrado!" << endl;
    }else{
        cout << "Nenhum besouro suspeito encontrado!" << endl;
    }
    return 0;
}
