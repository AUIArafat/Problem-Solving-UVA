#include<iostream>
#include<stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N;
    cin>>N;
    string S;
    getline(cin, S);
    while(N--){
        bool flag = true;
        stack<char> par;
        getline(cin, S);
        if(S.size()<=0){
            flag=true;
        }
        for(int i=0;i<S.size();i++){
            if(S[i]=='(' || S[i]=='[')
                par.push(S[i]);
            else if(S[i]==')' || S[i]==']'){
                if(par.empty()){
                    flag = false;
                }
                else if(par.top()=='(' && S[i]==')')
                    par.pop();
                else if(par.top()=='[' && S[i]==']')
                    par.pop();
            }
        }
        if(flag==false)
            cout<<"No"<<endl;
        else if(par.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

       // par.clear();
    }
}
