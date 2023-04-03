#include <bits/stdc++.h>
using namespace std;
#define pb      push_back
#define ll     long long int
#define all(x)  (x).begin(), (x).end()
#define lb      lower_bound
#define ub      upper_bound
#define vt      vector
const ll M= 1e9;
const ll N=1e5+10;

vt<int>parent(N);
vt<int>s(N,0);
void make(int a) {
   parent[a]=a;
   s[a]=1;
}
int find(int v) {
   if(v==parent[v]) return v;
   else return parent[v]=find(parent[v]);
}
void Union(int a,int b) {
   a=find(a);
   b=find(b);
   if(s[a]<s[b]) swap(a,b);
   if(a!=b) parent[b]=a;
   s[a]+=s[b];
}
void solve(){
    
 }

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
#endif
  
    // ll tt;
    // cin>>tt;
    // while(tt--)
    solve();
     
}






 

 



    



     



    


     



    
 

 



    



     



    



     



    


     



    
 

 



    



     



    





 

 



    



     



    


     



    
 

 



    



     



    



     



    


     



    
 

 



    



     



    








     



    


     



    
 

 



    



     



    



     



    


     



    
 

 



    



     



    





 

 



    



     



    


     



    
 

 



    



     



    



     



    


     



    
 

 



    



     



    