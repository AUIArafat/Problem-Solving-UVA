#include<iostream>
#include<bits/stdc++.h>
#define EPS 1e-7
using namespace std;
int p,q,r,s,t,u;
double f(double x){
    return (p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u);
}
double bisection(){
    double low=0, hi=1;
    while(low+EPS<hi){
        double mid = (low+hi)/2;
        if(f(low)*f(mid)<=0) hi = mid;
        else low = mid;
    }
    return (low+hi)/2;
}
void solve(){
    while(scanf("%d %d %d %d %d %d",&p, &q, &r, &s, &t, &u)!=EOF){
        if(f(0)*f(1)>0)
            cout<<"No solution"<<endl;
        else
            printf("%.4lf\n", bisection());
    }

}
int main(){
    solve();
}
