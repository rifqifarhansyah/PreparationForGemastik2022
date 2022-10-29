#include <bits/stdc++.h>
using namespace std;

int main(){
    long long out=0, sum,a, b,c;
    cin >> sum;
    cin >> a>>b>>c;
    for(long long i=a; i<1000000; i++){
        for(long long j=b; j<100000; j++){
            for(long long k=c; k<100000; k++){
                if((i+j+k) == sum){
                    out+=1;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<(out%1000000007)<<endl;
    return 0;
}