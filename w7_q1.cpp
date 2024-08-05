#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    long long ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    long long cumsum[n];
    cumsum[0]=ar[0];
    for(int i=1;i<n;i++){
        cumsum[i]=cumsum[i-1]+ar[i];
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        a=a-1;
        b=b-1;
        long long querysum;
        if (a==0){
            querysum = cumsum[b];
        }
        else{
            querysum = cumsum[b]-cumsum[a-1];
        }
        cout<<querysum<<"\n";
    }
}
