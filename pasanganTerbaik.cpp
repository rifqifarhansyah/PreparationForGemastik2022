#include <bits/stdc++.h>
using namespace std;

long long fungsi(long long a, long long b, long long c){
    return a * b + c;
}

int main(){
    long int n;
    cin>>n;
    while(n>0){
        long int x, y;
        cin>>x>>y;
        long long d[x];
        long long e[x];
        long long f[y];
        for(int i=0; i<x; i++){
            cin>>d[i];
        }
        for(int i=0; i<x; i++){
            cin>>e[i];
        }
        for(int i=0; i<y; i++){
            cin>>f[i];
        }
        long long min=1000000;
        long long val;
        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                val = fungsi(d[i],e[j],f[(d[i] * e[j])%y]);
                if(val<min){
                    min = val;
                }
            }
        }
        cout<<min<<endl;
        n--;
    }
    return 0;
}