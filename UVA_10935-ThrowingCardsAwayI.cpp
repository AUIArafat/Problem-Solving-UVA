#include<iostream>
#include<queue>
using namespace std;

void solve(){
    int N;
    while(1){
        cin>>N;
        if(N==0) return;
        queue<int>Q;
        for(int i=1;i<=N;i++)
            Q.push(i);
        if(Q.size()>1){
            cout<<"Discarded cards: ";
            for(int i=1;i<N-1;i++){
                cout<<Q.front()<<", ";
                Q.pop();
                Q.push(Q.front());
                Q.pop();
            }
            cout<<Q.front()<<endl;
            Q.pop();
            Q.push(Q.front());
            Q.pop();
            cout<<"Remaining card: ";
            cout<<Q.front()<<endl;
        }
        else{
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: ";
            cout<<Q.front()<<endl;

        }
    }

}

int main(){
    solve();
}
