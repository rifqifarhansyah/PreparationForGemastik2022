#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n>0){
        int a;
        long int b, sum=0;
        cin >> a>>b;
        for(int i=a+1; i<b; i++){
            bool prime=true;
            for(int j=2; j<i; j++){
                if(i % j == 0){
                    prime = false;
                }
            }
            if(prime){
                sum += 1;
            }
        }
        cout << sum<<endl;
        n--;
    }
    return 0;
}