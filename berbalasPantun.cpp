#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    long long sum=0;
    while(cin >> n){
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int j=0; j<n; j++){
            cin >> b[j];
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                sum += (a[i] + b[j]);
            }
        }
    }
    cout << sum<< endl;
    return 0;
}