#include<iostream>
using namespace std;
int bottle(int N){
    if(N==2)
        return 1;
    else if(N==1)
        return 0;
    else
        return (N/3) + bottle(N/3 + N%3);
}
int main(){
    int n;
    while(cin>>n, n!=0){
        cout<<bottle(n)<<endl;
    }
}
