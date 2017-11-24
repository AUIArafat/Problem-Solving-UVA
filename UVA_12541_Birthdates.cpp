#include<iostream>
using namespace std;
struct person{
    string name;
    int dd, mm, yyyy;
    person(){}
    person(string n, int d, int m, int y){
        name = n;
        dd = d;
        mm = m;
        yyyy = y;
    }
};

void solve(){
    person young("", 0, 0, 0);
    person old("xyz", 31, 12, 9999);
    person input;
    string n;
    int d, m, y;
    int N;
    cin>>N;
    while(N--){
        cin>>input.name>>input.dd>>input.mm>>input.yyyy;
        if(input.yyyy > young.yyyy) young = input;
        else if(input.yyyy == young.yyyy && input.mm > young.mm) young = input;
        else if(input.yyyy == young.yyyy && input.mm == young.mm && input.dd > young.dd) young = input;

        if(input.yyyy < old.yyyy) old = input;
        else if(input.yyyy == old.yyyy && input.mm < old.mm) old = input;
        else if(input.yyyy == old.yyyy && input.mm == old.mm && input.dd < old.dd) old = input;
    }
    cout<<young.name<<endl;
    cout<<old.name<<endl;
}
int main(){
    solve();
}
