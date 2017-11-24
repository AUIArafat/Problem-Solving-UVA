#include<iostream>
using namespace std;

void solve(){
    int tCase,cnt=0;
    cin>>tCase;
    while(tCase--){
        int arr[20009], N;
        cin>>N;
        for(int i=0;i<N-1;i++){
            cin>>arr[i];
        }
        int start=0, ends=0, max_ending_here = 0, max_so_far = 0, k =0, mx_length=0;
        start = 0;
        for(int i=0;i<N-1;i++){
            max_ending_here = max_ending_here + arr[i];
            if(max_ending_here < 0){
                max_ending_here = 0;
                k=1+i;
            }
            if((max_so_far < max_ending_here ) || (max_so_far == max_ending_here && i-k > ends-start)){
                max_so_far = max_ending_here;
                ends = i;
                start = k;
            }
        }
        if(max_so_far<=0)
            cout<<"Route "<<++cnt<<" has no nice parts"<<endl;
        else
            cout<<"The nicest part of route "<<++cnt<<" is between stops "<<start+1<<" and "<<ends+2<<endl;
    }
}
int main(){
    solve();
}
