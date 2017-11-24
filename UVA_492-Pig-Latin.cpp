#include<iostream>
using namespace std;

bool isVowel(char A){
    if(A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u' ||
       A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U'){
        return true;
    }
    return false;
}
void solve(){
    string S, S1;
    char temp;
    int flag=0;
    while(getline(cin,S)){
        char temp;
        int i=0;
        while(i<S.length()){
            if(isVowel(S[i])){
                while(isalpha(S[i])){
                    cout<<S[i];
                    i++;
                }
                cout<<"ay";
            }
            else if(!isVowel(S[i]) && isalpha(S[i])){
                temp = S[i];
                i++;
                while(isalpha(S[i])){
                    cout<<S[i];
                    i++;
                }
                cout<<temp<<"ay";
            }
            else{
                cout<<S[i];
                i++;
            }
        }
        cout<<endl;
        //cin.ignore();
    }
}
int main(){
    solve();
}
