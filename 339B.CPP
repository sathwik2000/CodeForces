#include <bits/stdc++.h>
using namespace std;

int main() {
long long n,t;
cin>>n>>t;
long long a[t];
for(int u=0;u<t;u++){
	cin>>a[u];
}
long long i=1,c=0;
for(int u=0;u<t;u++){
	if(i<=a[u]){
		c+=(a[u]-i);
		i=a[u];
	}
	else{
		c+=(a[u]-i);
		c+=n;
		i=a[u];
	}
}
cout<<c;
return 0;
}
