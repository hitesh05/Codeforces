#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

//enum colour {B, R};

void insert(string &s, queue<pair<char,int>>& q,char c, int index){
    int a = index+1;
    int b=index-1;
    if(c=='B'){
        if(a < s.size()){
            if(s[a]=='?'){
                s[a]='R';
                q.push({'R',a});
            }
        }
        if(b>=0){
            if(s[b]=='?'){
                s[b]='R';
                q.push({'R',b});
            }
        }
    }
    else{
        if(a < s.size()){
            if(s[a]=='?'){
                s[a]='B';
                q.push({'B',a});
            }
        }
        if(b>=0){
            if(s[b]=='?'){
                s[b]='B';
                q.push({'B',b});
            }
        }
    }
}

int main()
{
    quick

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        queue<pair<char,int>> q;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                pair<char,int> p('B',i);
                q.push(p);
                
            }
            else if(s[i]=='R'){
                pair<char,int> p('R',i);
                q.push(p);
            }
        }

        if(q.empty()){
            for(int i=0;i<s.size();i++){
                if(i%2==0){
                    s[i]='B';
                }
                else{
                    s[i]='R';
                }
            }
        }

        while(!q.empty()){
            pair<char,int> p = q.front();
            q.pop();
            char c = p.first; int index = p.second;
            insert(s,q,c,index);
        }

        cout << s << endl;

    }
}