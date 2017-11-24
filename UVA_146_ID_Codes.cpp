#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string S;
    bool check;
    while(cin>>S){
        if(S=="#")
            return 0;
        check = next_permutation(S.begin(), S.end());
        if(!check)
            cout<<"No Successor"<<endl;
        else
            cout<<S<<endl;
    }
}
