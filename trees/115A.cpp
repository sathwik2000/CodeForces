#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int a[n+2];
for(int i=1;i<=n;i++){
	cin>>a[i];
}
int max=0;
for(int i=1;i<=n;i++){
	int x=a[i],c=0;
	while(x!=-1){
		x=a[x];
		c++;
	}
	if(max<c)max=c;
}
cout<<max+1;
return 0;
}
