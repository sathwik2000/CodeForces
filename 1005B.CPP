#include<bits/stdc++.h>
using namespace std;
string s,x;
int check(int i,int j,int c){
  if(i==0||j==0)
  return c;
  if(s[i-1]==x[j-1])
  c= check(i-1,j-1,c+1);
  return c;
}
int main(){
cin>>s>>x;
cout<<s.size()+x.size()-2*check(s.size(),x.size(),0);
}
