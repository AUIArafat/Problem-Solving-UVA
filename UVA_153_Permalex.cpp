#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    string S, temp;
    int cnt;
    while(cin>>S, S!="#"){
        temp = S;
        cnt=0;
        sort(S.begin(), S.end());
        if(S==temp){
            printf("%10d\n", 1);
        }
        else{
            ++cnt;
            next_permutation(S.begin(), S.end());
            while(S!=temp){
                ++cnt;
                next_permutation(S.begin(), S.end());
            }
            printf("%10d\n", ++cnt);
        }
    }
}
