#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
long long a[n];
for(int t=0;t<n;t++){
  cin>>a[t];
}
sort(a+0,a+n);
long long ans=0;
for(int i=0;i<n/2;i++){
  ans+=((a[i]+a[n-1-i])*(a[i]+a[n-1-i]));
}
cout<<ans;
}
