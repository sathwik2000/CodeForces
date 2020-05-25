#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k,c=0;
cin>>n>>k;
c=240-k;
int i=1;
while(5*i<=c&&i<=n){
  c=c-(5*i);
  i++;
}
cout<<i-1;
}
