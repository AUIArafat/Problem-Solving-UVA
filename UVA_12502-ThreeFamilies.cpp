#include <iostream>

using namespace std;
void solve(){
    int t,x,y,z;
    cin>>t;
    while(t--){
    cin>>x>>y>>z;
        int eachTask = (x*60+y*60)/3;
        int extraByA = x*60 - eachTask;
        int result = z*extraByA / eachTask;
        cout<<result<<endl;
    }
}
int main(){
    solve();
}
