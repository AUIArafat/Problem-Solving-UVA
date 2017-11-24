#include<iostream>
#include<string.h>
#include<string>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    string S, S1, blankLine;
    cin>>N;
    cin.ignore();
    bool flag = false;
    while(N--){
        getline(cin, blankLine);
        if(flag)
            cout<<"\n";
        flag = true;
        map<int, string>M;
        map<int, string>:: iterator it;
        getline(cin, S);
        getline(cin, S1);
        std::istringstream iss(S);
        std::vector<std::string> results((std::istream_iterator<std::string>(iss)),std::istream_iterator<std::string>());
        std::istringstream iss1(S1);
        std::vector<std::string> results1((std::istream_iterator<std::string>(iss1)),std::istream_iterator<std::string>());
        for(int i=0;i<results.size();i++){
            int index;
            istringstream ( results[i] ) >> index;
            M[index] = results1[i];
        }
        it = M.begin();
        while(it!=M.end()){
            cout<<it->second<<endl;
            ++it;
        }
        M.clear();
    }
}
