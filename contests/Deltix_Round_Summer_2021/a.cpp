/**
 * @author      : archit
 * @GitHub      : archit-1997
 * @Email       : architsingh456@gmail.com
 * @file        : a.cpp
 * @created     : Sunday Aug 29, 2021 20:02:45 IST
 */

#include <bits/stdc++.h>
using namespace std;

void init(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
}

int main(){
    
    init();
    long long t;cin>>t;

    while(t--){
        long long a,b;cin>>a>>b;

        long long diff=abs(a-b);
        if(diff&1)
            cout<<-1;
        else{
            //if both are zero
            if(a==0 && b==0)
                cout<<0;
            else if(diff==0)
                cout<<1;
            else
                cout<<2;
        }
        cout<<"\n";
    }

    return 0;
}
