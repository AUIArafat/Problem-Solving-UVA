#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
#define pii pair< int, int >
#define sz 10000
vector <pii> Graph[sz];
priority_queue<pii, vector<pii>, greater<pii> > PQ;
int dist[sz], parent[sz], path[sz], p, child;
int firstNode, nextNode, weight, totalEdge, totalVertex, flag=0;

void UCS(int startVertex, int Goal){
    memset(parent, -1, sizeof(parent));
    PQ.push(pii(0, startVertex));
    dist[startVertex] = 0;
    parent[startVertex] = 1;
    pii temp;
    int u, v, cost;
    while(!PQ.empty()){
        temp = PQ.top();
        u = temp.second;
        PQ.pop();
        for(int i=0;i<Graph[u].size();i++){
            v = Graph[u][i].first;
            cost = Graph[u][i].second;
            if(dist[u] + cost < dist[v]){
                dist[v] = dist[u] + cost;
                parent[v] = u;
                PQ.push(pii(dist[v], v));
            }
            if(v==Goal)
                flag=1;
        }
    }
}
void solve(){
    int N,n,m,S,T,cnt=0;
    cin>>N;
    while(N--){
        cin>>totalVertex>>totalEdge>>S>>T;
        for(int i=0;i<totalEdge;i++){
            cin>>firstNode>>nextNode>>weight;
            Graph[firstNode].push_back(pii(nextNode, weight));
            Graph[nextNode].push_back(pii(firstNode, weight));
        }
         memset(dist, -1, sizeof(dist));
        for(int i=0;i<=sz;i++)
            dist[i] = 2147483647;
        if(totalEdge==0)
            cout<<"Case #"<<++cnt<<": unreachable"<<endl;
        else{
            UCS(S,T);
            if(flag==0){
                cout<<"Case #"<<++cnt<<": unreachable"<<endl;

        //return;
            }
            else{
                cout<<"Case #"<<++cnt<<": "<<dist[T]<<endl;
        //return;
            }
            for(int i=0;i<1000000;i++)
            Graph[i].clear();
        }
    }
}
int main(){
    solve();
}

/*
10 7
1 2 5
1 4 3
2 3 1
3 5 6
3 7 1
4 5 2
4 6 2
5 2 4
6 7 3
7 5 4
*/
