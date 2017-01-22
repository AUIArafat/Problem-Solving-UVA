#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> V;
    vector<int> V1;
    int t,n,sum,flag;
    int arr[10000];
    while(cin>>t>>n){
        sum = 0; flag=0;
        if(t==0 && n==0)
            return 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Sums of "<<t<<":"<<endl;
        for(int i=0;i<n;i++){
            V1=V;
            V.clear();
            sum = arr[i];
            V.push_back(arr[i]);
            for(int j=i+1;j<=n;j++){
               if(sum>t){
                    sum = sum - arr[j-1];
                    V.pop_back();
                }
                if(sum==t && V1!=V){
                    for(int i=0;i<V.size();i++){
                        if(i==V.size()-1){
                            cout<<V[i]<<endl;
                            V.clear();
                            flag=1;
                            continue;
                        }
                        else
                            cout<<V[i]<<"+";
                    }
                }
                else if(sum<t){
                    sum = sum + arr[j];
                    V.push_back(arr[j]);
                }
            }
        }
        if(flag==0)
            cout<<"NONE"<<endl;
    }
}
