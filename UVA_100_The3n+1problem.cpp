#include<iostream>
using namespace std;
int main(){
    int i,j, tempI, tempJ;
    while((cin>>i &&cin>>j)==1){
    tempI = i;
    tempJ = j;
    if(i>j){
        swap(i,j);
    }
    int cycleLength, maxLength = 0;
    while(i<=j){
        int n = i;
        cycleLength = 1;
        while(n!=1){
            if(n%2==1)
                n = 3*n+1;
            else
                n = n/2;
            ++cycleLength;
        }
        if(cycleLength>=maxLength){
            maxLength = cycleLength;
        }
        ++i;
    }
    cout<<tempI<<" "<<tempJ<<" "<<maxLength<<endl;
    }
}
