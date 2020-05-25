#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
  int x,y;
  cin>>x>>y;
  if(x==2&&y==2)
  cout<<"YES\n";
  else if(x==1||y==1)
  cout<<"YES\n";
  else
  cout<<"NO\n";
}
}
