#include<bits/stdc++.h>
using namespace std;
int main(){
long long na,nb,k,m,c=0;
cin>>na>>nb;
cin>>k>>m;
int a[na],b[nb];
for(int i=0;i<na;i++)
cin>>a[i];
for(int i=0;i<nb;i++)
cin>>b[i];
if(a[k-1]>=b[nb-m])
cout<<"NO";
else
cout<<"YES";
}
