#include <bits/stdc++.h>
using namespace std ;
vector < vector<int> > grafo;
int vis[10005];

int bfs(int origem, int num_vertices){
    priority_queue<pair> fila;
    fila.push(origem);
    memset(vis, 0, sizeof(vis));
    vis[origem] = 1;

    int soma = 0;
    while(!fila.empty()){
        int atual = fila.front();
        fila.pop();

        for(int i = 1 ; i <= num_vertices ; ++i){
            if(grafo[atual][i] && vis[i] == 0){
                fila.push(v);
                vis[i] = !vis[i];
            }
            //colocar verificação da soma aqui
        }
    }
    return 0;
}

int main(){
    int num_vertices, num_arestas;
    cin >> num_vertices >> num_arestas;

    for(int i = 1; i <= num_arestas; i++)
        for(int j = i; j < num_arestas; j++)
            grafo[i][j] = grafo[j][i] = 0;

    int u, v, w;
    for(int i = 0 ; i < num_arestas; i++){
        cin >> u >> v >> w;
        grafo[u][v] = w;
        grafo[v][u] = w;

        if(i == 0){
            int origem = u;
        }
    }

    int resultado = bfs(origem, num_vertices);
    cout << resultado << endl;

    return 0;
}
