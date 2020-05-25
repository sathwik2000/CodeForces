#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k,c=0;
cin>>n;
//1 5 10 20 100
  c+=(n/100);
  n=n-(n/100)*100;
  c+=(n/20);
  n=n-(n/20)*20;
  c+=(n/10);
  n=n-(n/10)*10;
  c+=(n/5);
  n=n-(n/5)*5;
  cout<<c+n;
}
