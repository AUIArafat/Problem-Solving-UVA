#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n, T, flag, result1, result2;
    while((cin>>n)){
        int arr[3000+10], temp[3010];
        flag=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            temp[i] = abs(arr[i]-arr[i+1]);
        }
        sort(temp, temp+n-1);
        for(int i=0;i<n-1;i++){
            if(temp[i]!=i+1){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Not jolly"<<endl;
        else
            cout<<"Jolly"<<endl;
    }
}

/*
2 1999 1998
jolly
4 1 4 3 5
jolly
4 1 2 5 7
jolly
3 4 1 3
not jolly
*/
