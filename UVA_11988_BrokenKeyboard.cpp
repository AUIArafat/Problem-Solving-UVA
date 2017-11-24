#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main(){
    string S;
    while(cin>>S){

        list<char> lst;
        list<char> :: iterator it;
        it = lst.begin();
        for(int i=0;i<S.length();i++){
            if(S[i]=='['){
                it = lst.begin();
            }
            else if(S[i]==']'){
                it = lst.end();
            }
            else{
                lst.insert(it, S[i]);
                //it++;
            }
        }
        it = lst.begin();
        while(it!=lst.end()){
            cout<<*it;
            it++;
        }
        cout<<endl;
    }
}
