#include<bits/stdc++.h>
using namespace std;

int main(){
   string guest;
   cin>>guest;
   string host;
   cin>>host;
   string pile;
   cin>>pile;
   map<char,int> m;
   int length = guest.length();
   for(int i=0; i<length; i++){
        m[guest[i]]++;
   }
   int l = host.length();
   for(int i=0; i<l; i++){
        m[host[i]]++;
   }
   int n = pile.length();
   for(int i=0; i<n; i++){
        m[pile[i]]--;
   }
   map<char,int> ::iterator it = m.begin();
   bool check = true;
   while(it!=m.end()){
    if(it->second != 0) check = false;
    it++;
   }

   if(check) cout<<"YES";
   else cout<<"NO";
   

}