#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin>>n;
    while(n>0){
        long int p,q,m;
        cin >> p>> q>>m;
        while(m>0){
            if(p>=q){
                p /= 2;
            }else{
                q /= 2;
            }
            m--;
        }
        if(p>q){
            cout << p<< ' ' << q;
        }else{
            cout<<q<<' '<<p;
        }
        cout<<"\n";
        n--;
    }
    return 0;
}