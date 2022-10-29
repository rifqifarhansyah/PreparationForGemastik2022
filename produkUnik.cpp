#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, x, y, z, sum=0;
    cin>>a>>b;
    cin>>x>>y>>z;
    for(int i=a; i<b+1; i++){
        if(i%x==0 && i%y!=0 && i%z!=0){
            sum += 1;
        }
        else if(i%x!=0 && i%y==0 && i%z!=0){
            sum += 1;
        }
        else if(i%x!=0 && i%y!=0 && i%z==0){
            sum += 1;
        }
    }
    cout<<sum<<endl;
    return 0;
}