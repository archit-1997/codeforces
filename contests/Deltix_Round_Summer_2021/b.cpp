/**
 * @author      : archit
 * @GitHub      : archit-1997
 * @Email       : architsingh456@gmail.com
 * @file        : b.cpp
 * @created     : Monday Aug 30, 2021 05:12:20 IST
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define P pair<int,int>

void init(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}

int main(){
    init();

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> v(n);

        queue<int> even,odd;
        int se=0,so=0,ec=0,oc=0;
        for(int i=0;i<n;i++){
            ll num;cin>>num;
            v[i]=num;
            if(num&1)
                oc++;
            else
                ec++;
            
            if(num&1){
                //number is odd
                if(i%2==0)
                    //number of odd numbers at even index
                    odd.push(i);
            }
            else{
                //number is even
                if(i%2==0)
                    //number of even numbers at even index
                    even.push(i);
            }
        }

        if(abs(ec-oc)>1){
            cout<<-1<<"\n";
            continue;
        }

        //when placing even at even
        for(int i=0;i<n;i++){
            if(v[i]%2==0 && i&1){
                int t=odd.front();
                odd.pop();
                se+=abs(i-t);
            }
        }
        //when placing odd at even
        for(int i=0;i<n;i++){
            if(v[i]&1 && i&1){
                int t=even.front();
                even.pop();
                so+=abs(i-t);
            }
        }
        if(ec==oc)
            cout<<min(so,se);
        else if(ec>oc)
            cout<<se;
        else
            cout<<so;
        cout<<"\n";

    }

    return 0;
}
