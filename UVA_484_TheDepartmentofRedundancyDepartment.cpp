#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
int main(){
    map<int, int> M;
    queue<int> Q;
    int N;
    while(scanf("%d", &N)==1){
        if(M[N]==0)
            Q.push(N);
        M[N]++;
    }
    for(int i=0;i<M.size();i++){
        cout<<Q.front()<<" "<<M[Q.front()]<<endl;
        Q.pop();
    }

}
