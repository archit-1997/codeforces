/**
 * @author      : archit
 * @GitHub      : archit-1997
 * @Email       : architsingh456@gmail.com
 * @file        : b.cpp
 * @created     : Sunday Sep 05, 2021 20:12:51 IST
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define P pair<int,int>

void init(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}


long long findXor(int n){
    long long rem=n%4;
    if(rem==0)
        return n;
    else if(rem==1)
        return 1;
    else if(rem==2)
        return n+1;
    else
        return 0;
}

int main(){

    init();

    long long t;cin>>t;
    while(t--){
        long long a,b;cin>>a>>b;
        //we need to find xor of all numbers from 0-a-1
        long long x=0;
        if(a>1)
            x=findXor(a-1);

        if(b==x)
            cout<<a;
        else if((x^a)==b)
            cout<<a+2;
        else
            cout<<a+1;
        cout<<"\n";
    }

    return 0;
}
