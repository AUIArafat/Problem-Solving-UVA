#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;

int arr[110];
vector<int> V[110];
void Bfs(int Vertex, int vertexNumber){
    int visited[100];
    for(int i=0;i<=vertexNumber;i++)
        visited[i]=0;
    queue<int> Q;
    Q.push(Vertex);
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int i=0; i<V[u].size();i++){
            if(visited[V[u][i]]==0){
                visited[V[u][i]] = 1;
                Q.push(V[u][i]);
            }
        }
    }
    int cont=0;

    for(int i=0;i<vertexNumber;i++) if(!visited[i]) cont++;

    printf("%d",cont);

    for(int i=0;i<vertexNumber;i++) if(!visited[i]) printf(" %d",i+1);
    printf("\n");
}

int main(){
    int vertexNumber, edge;
    int cnt;
    while(cin>>vertexNumber, vertexNumber!=0){
        int k, cnt=0;
        while(cin>>k, k!=0){
            while(cin>>edge){
                if(edge==0)
                    break;
                else
                    V[k-1].push_back(edge-1);
            }
        }
        int T, startVertex;
        cin>>T;
        while(T--){
            cnt=0;
            cin>>startVertex;
            Bfs(startVertex-1, vertexNumber);
        }
        for(int i=0;i<V[i].size();i++){
                V[i].clear();
        }
    }
}
