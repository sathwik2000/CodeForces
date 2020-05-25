#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k,c=0,p,l;
cin>>n;
cin>>p;
n--;
l=2;
int max =p,min=p;
while(n--){
  int u;
  cin>>u;
  if(max<u){
  max=u,c++;}
  else if(min>u){
  min=u,c++;}
  l++;
}
cout<<c<<endl;
}
