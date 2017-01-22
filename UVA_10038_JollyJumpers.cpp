#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, T, flag, result1, result2;
    int arr[3000+10];
    while((cin>>n)){
        flag = 1;
        cin>>arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            result1 = abs(arr[i] - arr[i-1]);
            if((i+1)<n){
                result2 = abs(arr[i+1] - arr[i]);
            }
            if(result1>=result2)
                flag = 1;
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
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
