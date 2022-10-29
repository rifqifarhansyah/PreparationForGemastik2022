#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin>>n;
    while(n>0){
        long int a;
        long long sum=0;
        cin>>a;
        while(a>0){
            long int b;
            cin>>b;
            long long c[b];
            for(int i=0; i<b; i++){
                cin>>c[i];
            }
            sum += b;
            a--;
        }
        long int stop;
        cin>>stop;
        if(stop == 0){
            n--;
        }
        cout<<sum<<endl;
    }
    return 0;
}