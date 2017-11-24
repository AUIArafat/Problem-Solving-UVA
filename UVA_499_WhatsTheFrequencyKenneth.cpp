#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    string S;
    int mx;
    map<char, int> M;
    vector<char> V;
    map<char, int> :: iterator it;
    while(getline(cin, S)){
        M.clear();
        V.clear();
        mx=0;
        for(int i=0;i<S.size();i++){
            if(isalpha(S[i]))
                M[S[i]]++;
        }
        it = M.begin();
        while(it!=M.end()){
            if(it->second > mx)
                mx = it->second;
            ++it;
        }
        it = M.begin();
        while(it!=M.end()){
            if(it->second == mx){
                V.push_back(it->first);
            }
            ++it;
        }
        sort(V.begin(), V.end());
        for(int i=0;i<V.size();i++){
            cout<<V[i];
        }
        cout<<" "<<mx<<endl;
    }
}
