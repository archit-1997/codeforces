/**
 * @author      : archit
 * @GitHub      : archit-1997
 * @Email       : architsingh456@gmail.com
 * @file        : a.cpp
 * @created     : Sunday Sep 05, 2021 19:58:04 IST
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
        string s;cin>>s;

        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='U')
                ans=ans+'D';
            else if(s[i]=='D')
                ans=ans+'U';
            else
                ans=ans+s[i];
        }
        cout<<ans<<"\n";
    }
}
