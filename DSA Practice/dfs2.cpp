#include<iostream>

using namespace std;

void DFS(int** edges, int v, int sv, int* visited){
    cout<<sv<<endl;
    visited[sv] = 1;

    for (int i = 0; i < v; i++)
    {
        if (i == sv)
        {
            continue;
        }
        if (edges[sv][i] == 1)
        {
            if (visited[i] == 1)
            {
                continue;
            }
            DFS(edges, v, i, visited);
        }
    }
    return;
}

int main(){
    int v; int e;
    cin>>v>>e;

    int **edges;
    edges = new int*[v];

    for (int i = 0; i < v; i++)
    {
        edges[i] = new int[v];
        for (int j = 0; j < v; j++)
        {
            edges[i][j] = 0;
        }
    }

    int s,d;

    for (int i = 0; i < e; i++)
    {
        cin>>s>>d;
        edges[s][d] = 1;
        edges[d][s] = 1;
    }    

    int* visited;
    visited = new int[v];

    for (int i = 0; i < v; i++)
    {
        visited[i] = 0;
    }
    
    DFS(edges,v,0,visited);

    return 0;
}