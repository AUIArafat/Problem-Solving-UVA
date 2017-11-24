#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int> >value;
    int N, arr;
    while(1){
        long long cost=0, tCost=0;
        cin>>N;
        if(N==0) return 0;
        for(int i=0;i<N;i++){
            cin>>arr;
            value.push(arr);
        }
        while(value.size()>1){
            int n1 = value.top();
            value.pop();
            int n2 = value.top();
            value.pop();
            cost+=(n1+n2);
            value.push(n1+n2);
        }
        value.pop();
        cout<<cost<<endl;
    }

}
