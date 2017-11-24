#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int U, int V);
    void topologicalSort();
};

Graph :: Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
void Graph :: addEdge(int U, int V){
    adj[U].push_back(V);
}

void Graph :: topologicalSort(){
    vector<int> inDgree(V,0);
    for(int u=0;u<V;u++){
        list<int>:: iterator it;
        for(it = adj[u].begin(); it!=adj[u].end();it++){
            ++inDgree[*it];
        }
    }
    queue<int> Q;
    for(int i=0;i<V;i++){
        if(inDgree[i]==0)
            Q.push(i);
    }
    int cnt=0;
        vector<int>order;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        order.push_back(u);
        list<int>:: iterator it;
        for(it = adj[u].begin(); it!=adj[u].end();++it){
            if(--inDgree[*it]==0)
                Q.push(*it);
        }

        ++cnt;
    }
    if(cnt!=V)
        cout<<"Cycle Exist"<<endl;
    else{
        for(int i=1;i<order.size();i++)
            cout<<order[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int n,m, first, next;
    while(1){
        cin>>n>>m;
        if(n==0 && m==0)
            return 0;
        Graph g(n+1);
        for (int i=0;i<m;i++){
            cin>>first>>next;
            g.addEdge(first, next);
        }
        g.topologicalSort();
    }
}
