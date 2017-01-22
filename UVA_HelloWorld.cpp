#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;

int main(){
    int N, result;
    int count = 0;
    while(scanf("%d", &N)){
            ++count;
        if(N<0){
            return 0;
        }
        if(N==0){
            continue;
        }
        else
            result = ceil(log2(N));
        cout<<"Case "<<count<<": "<<result<<endl;
    }
}
