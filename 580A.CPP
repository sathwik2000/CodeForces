#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k,c=0;
cin>>n;
c=1,k=1;
int h[n];
for(int p=0;p<n;p++){
  cin>>h[p];
}
for(int p=1;p<n;p++){
  if((h[p]-h[p-1])>=0){
    c++;
  }
  else{
    if(k<c)
    k=c;
    c=1;
  }
}
if(k<c)
k=c;
cout<<k;
}
