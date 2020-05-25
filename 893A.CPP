#include <bits/stdc++.h>

using namespace std;

int main() {
int o=1,s=2,p=3;
int n;
cin>>n;
while(n--){
	int u;
	cin>>u;
	if(u==o){
		s=(s+p)-(p=s);
	}
	else if(u==s){
		o=(o+p)-(p=o);
	}
	else{
		cout<<"NO";
		return 0;
	}
}
cout<<"YES";
	return 0;
}
