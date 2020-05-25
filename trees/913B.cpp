#include <bits/stdc++.h>

using namespace std;
vector<int> g[200001];
int n;
void dfs(int s,vector<int> &v){
	if(s==n){
		for(auto i:v)
		cout<<i<<" ";
		exit(0);
	}
	for(auto u:g[s]){
		v.push_back(u);
		dfs(u,v);
		v.pop_back();
	}
}
int main() {
int t;
cin>>n;
int a[n-1];
for(int u=0;u<n-1;u++){
	cin>>a[u];
	g[a[u]].push_back(u+2);
}
for(int y=1;y<=n;y++){
	if(g[y].size()==0)
	continue;
	int c=0;
	for(auto i:g[y]){
		if(g[i].size()==0)
		c++;
	}
	if(c>=3){
		continue;
	}
	cout<<"No";
	return 0;
}
cout<<"Yes";
return 0;
}
