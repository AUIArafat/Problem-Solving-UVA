#include<iostream>
#include<cstdio>
using namespace std;
 int main(){
    int N;
    while(1){
        cin>>N;
        if(N==0)
            return 0;
        if(N>=101)
            cout<<"f91("<<N<<") = "<<N-10<<endl;
        else if(N<=100)
            cout<<"f91("<<N<<") = "<<91<<endl;

    }
 }
