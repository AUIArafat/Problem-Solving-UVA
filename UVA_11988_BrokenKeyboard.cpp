#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int main(){
    string S;
    while(cin>>S){
        int flag=0;
        vector<char> V;
        vector<char> V1;
        string S1="";
        stack<string> St;
        for(int i=0;i<S.size();i++)
            V1.push_back(S[i]);
        for(int i=0;i<S.size();i++){
            if(flag==0 && S[i]=='['){
                flag=1;
                S.erase(S.begin()+i);
                --i;
            }
            else if(flag==1 && S[i]=='['){
                 S.erase(S.begin()+i);
                 cout<<"S1 : "<<S1<<endl;
                if(S1!="")
                    St.push(S1);
                S1="";
                --i;
                flag=0;
            }
            else if(flag==1 && S[i]!=']'){
                S1 = S1 + S[i];
                S.erase(S.begin()+i);
                --i;
            }
            else if(S[i]==']'){
                //V1.erase(remove(V1.begin(), V1.end(), S[i]), V1.end());
                S.erase(S.begin()+i);
                if(S1!="")
                    St.push(S1);
                S1="";
                --i;
                flag=0;
            }
        }
        for(int i=0;i<S.size();i++){
            V.push_back(S[i]);
        }
        cout<<"Size : "<<St.size()<<endl;
        for(int i=0;i<V.size();i++){
            //cout<<V[i];
            if(!St.empty())
                cout<<St.top();
            if(!St.empty())
                St.pop();
        }
        for(int i=0;i<V.size();i++)
            cout<<V[i];
    }
}
