#include <bits/stdc++.h>

using namespace std;
vector<int> g[100000];
void dfs(int s,int e){
	if(s==e){
	cout<<"YES";
	exit(0);
}
for(auto i:g[s])
dfs(i,e);
}
int main() {
int n,t;
cin>>n>>t;
int a[n-1];
for(int u=0;u<n-1;u++){
	cin>>a[u];
	g[u+1].push_back(u+1+a[u]);
}
dfs(1,t);
cout<<"NO";
return 0;
}
