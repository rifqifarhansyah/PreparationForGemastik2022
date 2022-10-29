#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,q;
    cin>>n>>m>>q;
    int a[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    while(q>0){
        int v, x, y, z;
        cin>>v>>x>>y>>z;
        int sum = 0;
        for(int i=v-1; i<y; i++){
            for(int j=x-1; j<z; j++){
                sum += a[i][j];
            }
        }
        cout<<sum<<endl;
        q--;
    }

    return 0;
}